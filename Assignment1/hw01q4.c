#include <stdio.h>
#pragma warning(disable : 4996)

// CSE 240 Spring 2017 Homework 1 Question 4 (25 points)
// Before starting this assignment, please compile and run this program.
// You will first notice that the program will not compile. Fix the errors and define the error types.
// Next, you will notice that the program is printing incorrect information. Fix the errors and define those error types.

void main() {
    
    // Problem 1: (5 points)
    // The statement below should cause the program to not compile. Correct the error(s). (2.5 points).
    
    //Didn't declare variable type and left out semi-colon delimiter
    int y = 100;
    
    printf("Integer y is equal to %d\n", y);
    
    // Define what type of error this is, your answer should replace the space next to "Error Type: " below (2.5 points).
    // Your answer should be either Syntactic, Semantic, or Contextual.
    printf("Error Type: Syntactic \n\n");
    
    
    // Problem 2: (5 points)
    // Half of 10 is 5, why is the program printing that half of 10 is 0? Correct the error(s) (2.5 points).
    
    int x = 10;
    
    //Used 1/2, which isn't going to do the math correctly.
    printf("Half of %d is %1.0f\n", x, x * (0.5));
    
    // Define what type of error this is, your answer should replace the space next to "Error Type: " below (2.5 points).
    // Your answer should be either Syntactic, Semantic, or Contextual.
    printf("Error Type: Semantic \n\n");
    
    
    // Problem 3: (5 points)
    // Integer variable x has been initialized to 10, why does the program seem to think otherwise? Correct the error(s) (2.5 points).
    
    x = 10;
    
    //Used declarative =, when you want to compare, ==.
    if (x == 20)
    printf("x is equal to 20.\n");
    if (x > 20)
    printf("x is greater than 20.\n");
    if (x < 20)
    printf("x is less than 20.\n");
    
    // Define what type of error this is, your answer should replace the space next to "Error Type: " below (2.5 points).
    // Your answer should be either Syntactic, Semantic, or Contextual.
    printf("Error Type: Semantic \n\n");
    
    
    // Problem 4: (5 points)
    // Surely, 10 is an even number. Why is the program printing that 10 is an odd number? Correct the error(s) (2.5 points).
    
    x = 10;
    
    //Divided, / when you want to check ramainder. %.
    if (x % 2 == 0)
        printf("%d is an even number.\n", x);
    if (x % 2 != 0)
        printf("%d is an odd number.\n", x);
    
    // Define what type of error this is, your answer should replace the space next to "Error Type: " below (2.5 points).
    // Your answer should be either Syntactic, Semantic, or Contextual.
    printf("Error Type: Semantic \n\n");
    
    
    // Problem 5: (5 points)
    // This bit of code is meant to print "Hello World!". Correct the error(s) (2.5 points).
    
    //Declared a double, %d, when you want a string, %s.
    printf("Hello %s\n", "World!");
    
    // Define what type of error this is, your answer should replace the space next to "Error Type: " below (2.5 points).
    // Your answer should be either Syntactic, Semantic, or Contextual.
    printf("Error Type: Semantic \n\n");
}
