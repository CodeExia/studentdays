#include <stdio.h>


int main(){
    int x;

    printf("enter ur num: ");
    scanf("%d",&x);
    if (x > 0){
        if (x %2 == 0)
        {
            printf ("x is positive and even");         
        } else{
            printf ("x is positive and odd");
        }
    }
    else if (x < 0){
        if (x %2 == 0)
        {
            printf("x is negative and even");
        } else{
            printf("x is negative and odd");
        }
    }else {
        printf("x is 0");
    }
    return 0;
}