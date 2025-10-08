#include <stdio.h>

int main(){
    int array[5] = {1,2,3,4,5};
    int n = sizeof(array) / sizeof(array[0]);
    int *pArray = array;

    printf("even numbers: \n");
    for (int j = 0; j < n; j ++){
        if (*(array + j) % 2 == 0){
            printf("%d %d %d \n", *(pArray + j),*(array + j),array[j]);
        }
    }
    return 0;

   
    
}