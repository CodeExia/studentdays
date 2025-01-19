#include <stdio.h>

void swap(int *one, int *two);
int main()
{
    int num1,num2;
    int *addr1,*addr2;

    printf("Give two numbers:\n");
    scanf("%d %d", &num1,&num2);

    printf("X is %d, and Y is %d.\n", num1, num2);

    addr1 = &num1;
    printf("%x\n", addr1);
   
    addr2 = &num2;
    printf("%x\n", addr2); 

    swap(addr1,addr2);
    
    printf("%d\n", num1);
    printf("%d\n", num2); 
    
    return 0;
}

void swap(int *one, int *two)
{
    int temp;

    temp = *one;
    *one = *two;
    *two = temp;
}
