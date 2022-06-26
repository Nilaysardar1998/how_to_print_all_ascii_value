//Program to print all ASCII value in C at ons  
#include <stdio.h>

int main() {
    for (int i = 0; i <= 255; i++) {
        printf("\nASCII Value of [%c] is [%d]\n",(char)i,i);
    }
    return 0;
}
