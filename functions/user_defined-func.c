#include<stdio.h>

int addNumbers(int a, int b);  // function prototype

// Function prototype
/*
A function prototype is simply the declaration of a function 
that specifies function's name, parameters and return type. 
It doesn't contain function body.

A function prototype gives information to the compiler that 
the function may later be used in the program.

NOTE: no need to add if function is defined above main function.
*/

int addNumbers(int a, int b);

int main(){
    int n1, n2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    sum = addNumbers(n1, n2); // function call
    printf("Sum = %d", sum);

    return 0;
}

int addNumbers(int a, int b){
    int result;
    result = a + b;
    return result;
}
