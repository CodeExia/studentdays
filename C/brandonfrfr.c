#include <stdio.h>
#include <ctype.h>
int main(){

    int array[3][3];
    for (int g = 0; g<3; g++){
        for(int w = 0; w<3; w++){
            printf("Input number:");
            scanf("%d ", &array[g][w]);
        }
    }

        for (int g = 0; g<3; g++){
        for(int w = 0; w<3; w++){
            printf("%d ", array[g][w]);
        }
        printf("\n");
    }
    return 0;
}