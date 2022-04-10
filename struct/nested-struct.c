#include<stdio.h>
#include<string.h>

struct complex {
    int imag;
    float real;
};

struct number {
    struct complex comp;
    int integer;
} num1, num2;

int main(){
    // Example 3: Nested Structures

    // initialize complex variables
    num1.comp.imag = 11;
    num1.comp.real = 5.25;

    // initialize number variables
    num1.integer = 6;

    // print struct variables
    printf("Imaginary Part: %d\n", num1.comp.imag);
    printf("Real Part: %.2f\n", num1.comp.real);
    printf("Integer: %d\n", num1.integer);
}
