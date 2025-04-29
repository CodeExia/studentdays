#include <stdio.h>

void Array(int arr[][3]){

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if (arr[i][j]%2 != 0){
            printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

void ArrayPtr(int arr[][3]){

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if (*(*(arr + i)+j)%2 != 0){
            printf("%d ", *(*(arr + i)+j));
            }
        }
    }
}

void Ptr(int arr[][3]){

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if (*(*(arr + i)+j)%2 != 0){
            printf("%d ", *(*(arr + i)+j));
            }
        }
    }
}

void sumTzy(int arr [][3]){
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (*((arr+i*3)+j) % 2 == 0) {
                sumEven += *((arr+i*3)+j);
            } else {
                sumOdd += *((arr+i*3)+j);
            }
        }
    }

    printf("\nThe sum of the even numbers is %d\n", sumEven);
    printf("\nThe sum of the odd numbers is %d", sumOdd);

}

int main(){
    
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    Array(arr);
    ArrayPtr(arr);
    sumTzy(arr);
    return 0;
}