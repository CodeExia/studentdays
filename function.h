#include <stdio.h>
#include <string.h>
#include <math.h>


    //We use a pointer to point to that array using *
    //The const is only to ensure that the array won't be altered in anyway (since it's a pointer, its a pass by reference function)
int binarytodecl(const char *binary) {
    int decimal = 0;
    //we declare the decimal as 0 as default
    int length = strlen(binary);
    //this is used to get the length of the array (it's easier to do this as strings)
    
    for (int i = 0; i < length; i++) {
        //i < length ensures the loop won't go beyond the array
        if (binary[length - 1 - i] == '1') {
            //[length - 1 - i] is used so that it starts with the least significant digit first
            decimal += pow(2, i);
        }
    }
    
    return decimal;
}
