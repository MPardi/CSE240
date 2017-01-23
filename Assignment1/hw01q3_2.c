/* This C program demonstrates the switch statement without using breaks. */ /* The program is tested on MS Visual C++ platform */

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996) // Remove this line in Unix GCC environment

int main(void) {
    char ch;
    int f, a = 10, b = 20, c = 0;
    
    while(c < 5) {
        printf("Please enter desired arithmetic opperation (+, -, *, /): ");
        scanf("\n%c", &ch);
        
        printf("ch = %c\n", ch);
        
        switch (ch) {
            case '+': f = a + b; printf("f = %d\n", f); break;
            case '-': f = a - b; printf("f = %d\n", f); break;
            case '*': f = a * b; printf("f = %d\n", f); break;
            case '/': f = a / b; printf("f = %d\n", f); break;
            default: printf("invalid operator\n");
        }
        
        c++;
    }
}
