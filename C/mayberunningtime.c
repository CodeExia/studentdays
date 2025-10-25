#include <stdio.h>
#include <time.h>

void test1(int n) {
    long long sum = 0;
    clock_t start = clock();

    for (int i = 0; i < n; ++i)
        ++sum;

    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Test 1: n = %d, time = %f sec\n", n, time_taken);
}

int main() {
    int ns[] = {1000, 10000, 100000, 1000000};
    for (int i = 0; i < 4; ++i)
        test1(ns[i]);
    return 0;
}