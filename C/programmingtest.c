#include <iostream>
#include <string>
int main( ) {
    string *strPtr;
    for (int x = 0; x < 10; x++) {
        strPtr = new string( getnewstring() );
        reverse(strPtr);
        System.out.println(“Reversed is %s\n”, *strPtr);
    }
    return 0;
}