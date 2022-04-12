#include<stdio.h>

// // Example1: #define preprocessor

// #define PI 3.1415

// int main(){
//     float radius, area;
//     printf("Enter the radius: ");
//     scanf("%f", &radius);

//     // Notice, the use of PI
//     area = PI*radius*radius;

//     printf("Area = %.2f", area);
//     return 0;

// }


// /*
//     Function like Macros
//     You can also define macros that work in a similar way like a function call. This is known as function-like macros. for example,
// */

// #define PI 3.1415
// #define circleArea(r) (PI*(r)*(r))

// int main(){
//     float radius, area;
//     printf("Enter the radius: ");
//     scanf("%f", &radius);
//     area = circleArea(radius);
//     printf("Area = %.2f", area);
// }


/*
    Uses of Conditional
    1. use different code depending on the machine, operating system
    2. compile same source file in two different programs
    3. to exclude certain code from the program but to keep it as reference for future purpose

    How to use conditional?
    to use conditional, #ifdef,  #if, #defined, #else and #elif directives are used.
*/


/* #ifdef Directive
    #ifdef MACRO
        // conditional codes
    #endif
*/

/* #if, #elif and #else Directive
    #if expression
        // conditional codes
    #endif

    #if expression
        // conditional codes if expression is non-zero
    #elif expression1
        // conditional codes if expression is non-zero
    #elif expression2
        // conditional codes if expression is non-zero
    #else
        // conditional if all expressions are 0
    #endif
*/

/* Predefined Macros
    __DATE__ A string containing the current date
    __FILE__ A string containing the file name
    __LINE__ An integer representing the current line number
    __STDC__ If follows ANSI standard C, then the value is a nonzero integer
    __TIME__ A string containing the current date.
*/

// Example 3: Get current time using __TIME__
int main(){
    printf("Current time: %s", __TIME__);
}

