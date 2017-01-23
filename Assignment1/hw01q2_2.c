/* This C program demonstrates the switch statement without using breaks. */ /* The program is tested on MS Visual C++ platform */

#include <stdio.h>
#pragma warning(disable : 4996) //Remove this line in UNIX GCC environment

//You said not to change function header, but I couldn't get the program to run using void.
void main() {
    char ch;
    int f, a = 10, b = 20, c;
    
    //Had problems with scanf originally because it kept adding the returned blank line to stdin, causing the loop
    //to execute a second time with no input before allowing me to enter new user input.
    //Solved this problem by including \n before the data type (ex; scanf("\n%c", &ch);
    for(c = 0; c < 5; c = c + 1) {
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
        
        printf("\n");
    }
}
