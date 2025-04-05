#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int my_array[] = {31,54,77,52,93};
    int *ptr;

    ptr = my_array;

    cout << *ptr << " ";
    ptr = ptr + 2;

    cout << *ptr << " ";
    
    ptr++;
    cout << *ptr << " ";

    ptr = ptr - 2;
    cout << *ptr << " ";
    
    ptr--;
    cout << *ptr << endl;

    system("PAUSE");
    return 0;
}