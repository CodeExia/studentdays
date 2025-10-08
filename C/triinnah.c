#include <stdio.h>

int main()
{

    char student_name[80];
    char student_id[80];
    float grade1, grade2, grade3, average;

    printf("Please enter your name:\n");
    scanf("%s", student_name);
    printf("Please enter your ID:\n");
    scanf("%s", student_id);
    
    printf("Please enter your first grade:\n");
    scanf("%f", &grade1);
    printf("Please enter your second grade:\n");
    scanf("%f", &grade2);
    printf("Please enter your third grade:\n");
    scanf("%f", &grade3);

    average = (grade1 + grade2 + grade3) / 3;

    printf("Grade Report:\n");
    printf("Your name: %s\n", student_name);
    printf("Your ID: %s\n", student_id);
    printf("Your grade 1: %.2f \nYour grade 2: %.2f \nYour grade 3: %.2f \n", grade1,grade2,grade3);

    if (average >= 75 && average <= 100)
    {
        printf("You have passed!\n");
    }
    else if (average < 75 && average > 0)
    {
        printf("You have failed.\n");
    }
    else
    {
        printf("Error calculating the average, please try again.\n");
        return 1;
    }



    return 0;














}