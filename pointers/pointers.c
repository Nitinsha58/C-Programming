#include<stdio.h>

float main(){
    // int *pc, c;
    // c = 5;
    // pc = &c;
    // printf("%d", *pc);


    // // Changing value pointed by pointer
    // int a, *b;
    // a = 5;
    // b = &a; 
    // a = 3;

    // printf("a: %d, b: %d", a, *b);
    // return 0;


    // // Example 1:
    // int* pc, c, d;
    // c = 5;
    // d = -15;

    // pc = &c; printf("%d\n", *pc);
    // pc = &d; printf("%d\n", *pc);


    // // Example 2:
    // int *pc, c;

    // c = 22;
    // printf("Address of c: %p\n", &c);
    // printf("VAlue of c: %d\n\n", c);

    // pc = &c;
    // printf("Address of pointer pc: %p\n", pc);
    // printf("Content of pointer pc: %d\n\n", *pc);

    // c = 11;
    // printf("Address of pointer pc: %p\n", pc);
    // printf("Content of pointer pc: %d\n\n", *pc);

    // *pc = 2;
    // printf("Address of c: %p\n", &c);
    // printf("VAlue of c: %d\n\n", c);


    // Common mistakes when working with pointers
    int c, *pc;

    // // pc is address but c is not
    // pc = c; // Error
    
    // // &c is address but *pc is not
    // *pc = &c; // Error

    // // both &c and pc are addresses
    // pc = &c; // Not an error 

    // both c and *pc are values
    *pc = c; // Not an error


}