#include <CL/cl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

const char *kernelSrc =
"__kernel void check_sorted(__global int* arr, __global int* flag, int size) {\n"
"    int i = get_global_id(0);\n"
"    if (i < size - 1) {\n"
"        if (arr[i] > arr[i + 1]) {\n"
"            *flag = 0;\n"
"        }\n"
"    }\n"
"}\n";

bool isSortedGPU(cl_context ctx, cl_command_queue queue, cl_program program, int *arr, int size) {
    cl_int err;
    cl_kernel kernel = clCreateKernel(program, "check_sorted", &err);

    int flag = 1;
    cl_mem arrBuf = clCreateBuffer(ctx, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                                   size * sizeof(int), arr, NULL);
    cl_mem flagBuf = clCreateBuffer(ctx, CL_MEM_READ_WRITE | CL_MEM_COPY_HOST_PTR,
                                    sizeof(int), &flag, NULL);

    clSetKernelArg(kernel, 0, sizeof(cl_mem), &arrBuf);
    clSetKernelArg(kernel, 1, sizeof(cl_mem), &flagBuf);
    clSetKernelArg(kernel, 2, sizeof(int), &size);

    size_t global = size;
    clEnqueueNDRangeKernel(queue, kernel, 1, NULL, &global, NULL, 0, NULL, NULL);

    clFinish(queue);

    clEnqueueReadBuffer(queue, flagBuf, CL_TRUE, 0, sizeof(int), &flag, 0, NULL, NULL);

    clReleaseMemObject(arrBuf);
    clReleaseMemObject(flagBuf);
    clReleaseKernel(kernel);

    return flag == 1;
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int main() {
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % 100;

    printf("Initial array:\n");
    printArr(arr, SIZE);
    printf("\n\n");

    // OpenCL Setup
    cl_platform_id platform;
    cl_device_id device;
    cl_context ctx;
    cl_command_queue queue;
    cl_program program;
    cl_int err;

    clGetPlatformIDs(1, &platform, NULL);
    clGetDeviceIDs(platform, CL_DEVICE_TYPE_GPU, 1, &device, NULL);

    ctx = clCreateContext(NULL, 1, &device, NULL, NULL, &err);
    queue = clCreateCommandQueue(ctx, device, 0, &err);

    program = clCreateProgramWithSource(ctx, 1, &kernelSrc, NULL, &err);
    clBuildProgram(program, 1, &device, NULL, NULL, NULL);

    clock_t start = clock();

    while (!isSortedGPU(ctx, queue, program, arr, SIZE)) {
        int i = rand() % SIZE;
        int j = rand() % SIZE;

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        double elapsed = (double)(clock() - start) / CLOCKS_PER_SEC;

        printf("[%.3f sec] ", elapsed);
        printArr(arr, SIZE);
        printf("\n");
    }

    printf("\nArray sorted!\n");
    printArr(arr, SIZE);
    printf("\n");

    clReleaseProgram(program);
    clReleaseCommandQueue(queue);
    clReleaseContext(ctx);

    return 0;
}
