#include <stdio.h>
//Include standard libraries

#include <cs50.h>
//User friendly input libraries (mostly)

int main(void)
{
    int x = get_int("Input any number you want something to be added to: ");
    //Ask for the input of the user
    int y = get_int("What number do you want to add to the first number? ");
    //Ask for the second variable, essentially what to add to the first x

    int answer = x + y;
    //Add the two variables and return it as "answer"

    printf("Here is your answer = %i\n", answer);
    //Print or output the answer to the screen
}

