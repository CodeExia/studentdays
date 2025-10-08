#include <stdio.h>

int main (int argc, const char * argv[]){
    
    int a, ans;
    
    do {
        printf("Menu Programs:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
        printf("Choose:");
        scanf("%d", &a);
        
        
        if(a == 1){
            
            do{
                int x, y, sum;
                
                printf("Enter the first number: ");
                scanf("%d", &x);
                printf("Enter the second number: ");
                scanf("%d", &y);
                
                sum = x + y;
                
                printf("%d plus %d is equals %d\n", x, y, sum);
                
                printf(" Do you want to try again? (1- yes, 0- no)\n");
                scanf("%d", &ans);
            } while (ans == 1);
        }
        if (a == 2){
            do{
                int x, y, diff;
                
                printf("Enter the first number: ");
                scanf("%d", &x);
                printf("Enter the second number: ");
                scanf("%d", &y);
                
                diff = x - y;
                
                printf("%d minus %d is equals %d\n", x, y, diff);
                
                printf(" Do you want to try again? (1- yes, 0- no)\n");
                scanf("%d", &ans);
            } while (ans == 1);
        }
        if (a == 3){
            do{
                int x, y, prod;
                
                printf("Enter the first number: ");
                scanf("%d", &x);
                printf("Enter the second number: ");
                scanf("%d", &y);
                
                prod = x * y;
                
                printf("%d times %d is equals %d\n", x, y, prod);
                
                printf(" Do you want to try again? (1- yes, 0- no)\n");
                scanf("%d", &ans);
            } while (ans == 1);
        }
        if (a == 4){
            do{
                int x, y, quo;
                
                printf("Enter the first number: ");
                scanf("%d", &x);
                printf("Enter the second number: ");
                scanf("%d", &y);
                
                quo = x / y;
                
                printf("%d divided by %d is equals %d\n", x, y, quo);
                
                printf(" Do you want to try again? (1- yes, 0- no)\n");
                scanf("%d", &ans);
            } while (ans == 1);
        }
        if (a == 5){
            printf(" Are you sure to exit this program? (1- yes, 0-no)\n");
            scanf("%d", &ans);
            
            if(ans == 1){
                return 0;
            }
        }
    } while (a == 1 || a == 2 || a == 3 || a == 4 || a == 5);
    
    return 0;
    
}


