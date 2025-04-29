#include <stdio.h>
#include <string.h>

struct Student{
    char name[80];
    int age;
    float mg;
    float fg;
} st1, st2;

int main(){

    struct Student st1 = {"Azriel", 18, 1.50, 3.00};

    printf("Name: %s\tAge: %d\tMidterm Grade: %.2f\tFinal Grade: %.2f\t Average: %.2f",st1.name,st1.age,st1.mg,st1.fg,(st1.mg+st1.fg)/2);

    return 0;



}