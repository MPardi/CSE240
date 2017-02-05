/* This C program demonstrates the switch statement without using breaks. */ /* The program is tested on MS Visual C++ platform */

#include <stdio.h>
#pragma warning(disable : 4996) // Remove this line in Unix GCC environment

void main() {
    char ch;
    int f, a = 10, b = 20, c = 0;
    double f2;
    
    while(c < 5) {
        printf("Please enter desired arithmetic opperation (+, -, *, /): ");
        ch = getchar();
        
        printf("ch = %c\n", ch);
        
        switch (ch) {
            case '+': f = a + b; printf("f = %d\n", f); break;
            case '-': f = a - b; printf("f = %d\n", f); break;
            case '*': f = a * b; printf("f = %d\n", f); break;
            case '/': f2 = (double)(a) / b; printf("f = %.2f\n", f2); break;
            default: printf("invalid operator\n");
        }
        while ((ch = getchar()) != '\n' && ch != EOF) { }
        c++;
        printf("\n");
    }
}
