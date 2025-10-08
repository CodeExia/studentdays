#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int counter = 3;
    //Sets a variable named "counter" and setting it into 3
    while (counter > 0)
    //This makes the code run in a loop as long as the value of counter is greater than 0
    {
        printf("Meow!\n");
        //Meows, obviously.
        counter++;
        //Every time this gets triggered, add 1 to the variable counter
    }
}
