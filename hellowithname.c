#include <cs50.h>
//To incluide the cs50.h header file for the input
#include <stdio.h>
//To include the stdio.h header file for printf

int main(void)
{
    string answer = get_string("What's your name? ");
    //Ask the user or prompt them for their name input to be used for hello function

    printf("hello, %s!\n", answer);
    //Prints "hello, (answer)!" - the answer is a variable in string format obtained from the input above
}
