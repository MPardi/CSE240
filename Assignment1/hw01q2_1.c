/* This C program demonstrates the switch statement without using breaks. */ /* The program is tested on MS Visual C++ platform */

#include <stdio.h>
#pragma warning(disable : 4996) // Remove this line in Unix GCC environment

int main() {
    char ch;
    ch = '+';
    int f, a = 10, b = 20;
    double f2;
    printf("ch = %c\n", ch);
    switch (ch) {
        case '+': f = a + b; printf("f = %d\n", f); break;
        case '-': f = a - b; printf("f = %d\n", f); break;
        case '*': f = a * b; printf("f = %d\n", f); break;
        case '/': f2 = (double)(a) / b; printf("f = %.1f\n", f2); break;
        default: printf("invalid operator\n");
    }
    ch = '-';
    printf("ch = %c\n", ch);
    switch (ch) {
        case '+': f = a + b; printf("f = %d\n", f); break;
        case '-': f = a - b; printf("f = %d\n", f); break;
        case '*': f = a * b; printf("f = %d\n", f); break;
        case '/': f2 = (double)(a) / b; printf("f = %.1f\n", f2); break;
        default: printf("invalid operator\n");
    }
    ch = '*';
    printf("ch = %c\n", ch);
    switch (ch) {
        case '+': f = a + b; printf("f = %d\n", f); break;
        case '-': f = a - b; printf("f = %d\n", f); break;
        case '*': f = a * b; printf("f = %d\n", f); break;
        case '/': f2 = (double)(a) / b; printf("f = %.1f\n", f2); break;
        default: printf("invalid operator\n");
    }
    ch = '/';
    printf("ch = %c\n", ch);
    switch (ch) {
        case '+': f = a + b; printf("f = %d\n", f); break;
        case '-': f = a - b; printf("f = %d\n", f); break;
        case '*': f = a * b; printf("f = %d\n", f); break;
        case '/': f2 = (double)(a) / b; printf("f = %.1f\n", f2); break;
        default: printf("invalid operator\n");
    }
    ch = '%';
    printf("ch = %c\n", ch);
    switch (ch) {
        case '+': f = a + b; printf("f = %d\n", f); break;
        case '-': f = a - b; printf("f = %d\n", f); break;
        case '*': f = a * b; printf("f = %d\n", f); break;
        case '/': f2 = (double)(a) / b; printf("f = %.1f\n", f2); break;
        default: printf("invalid operator\n");
    }
    
}