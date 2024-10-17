#include <stdio.h>
//Include standard Input and Output libraries
#include <cs50.h>
//Include CS50 "training wheels"

int main(void)
{
    int x = get_int("What's the value of the first number? ");
    //Get the value of the first number and return it as the variable "x"
    int y = get_int("What's the value of the second number? ");
    //Get the value of the first number and return it as the variable "y"

    if (x > y)
    //This checks if the first number typed by the user is greater than the second number
    {
        printf("the first number is greater than the second number.\n");
        //If true, then this gets printed out
    }
    else if (x < y)
    //If the first conditional is false, this triggers.
    //This checks if the first number is lesser than the second number
    {
        printf("the first number is is lesser than the second number.\n");
        //If true, then this gets printed out
    }
    else printf("the first number is is equal to the second number.\n");
    //If nothing else in the above is true, then it falls on to this.
}
