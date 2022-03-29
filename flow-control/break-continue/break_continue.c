#include<stdio.h>

int main(){


    // Break Statement
    /*
    The break statement ends the loop immediately when it is encountered. 
    Its syntax is: 
    */

    // // Example 1. 
    // // Program to calculate the sum of numbers (10 numbers max)
    // // if the user enters a negative number, the loop terminates

    // double num, sum = 0.0;

    // for (int i = 1; i <= 10; ++i){

    //     printf("Enter the number: ");
    //     scanf("%lf", &num);

    //     if (num < 0.0){
    //         break;
    //     }

    //     sum += num;
    // }   

    // printf("Sum is %lf", sum);


    // Continue Statement
    /*
    The continue statement skips the current iteration of the loop and 
    continues with the next iteration.
    */

    // // Example 2. 
    // // Sum of 10 numbers, skip negative, stop at 0.0
    // double num, sum = 0.0;

    // for (int i = 1; i <= 10; ++i){

    //     printf("Enter the number: ");
    //     scanf("%lf", &num);

    //     if (num < 0.0){
    //         continue;;
    //     }else if (num == 0.0){
    //         break;
    //     }

    //     sum += num;
    // }   

    // printf("Sum is %lf", sum);


    return 0;
}