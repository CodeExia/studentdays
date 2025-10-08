#include <stdio.h>

int main()
{
    int h, w, age, educ;

    printf("Enter your height in feet: \n");
    scanf("%d", &h);
    printf("Enter your weight in kilos: \n");
    scanf("%d", &w);
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("If you are atleast a high school graduate enter 1 if not enter 2: \n");
    scanf("%d", &educ);

    if(h>=5){
        if(w==50){
            if(age>=18){
                if(educ==1){
                    printf("You are qualified\n");
                } else {
                    printf("You must be atleast a high school graduate\n");}
            } else {
                printf("You must be atleast 18\n");}
        } else {
            printf("You must be 50 kilos\n");}
    } else {
        printf("You must be atleast 5 feet\n");} 
                
    return 0;
}