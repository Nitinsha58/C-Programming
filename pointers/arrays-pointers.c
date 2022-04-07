#include<stdio.h>


int main(){
    // int x[4];
    // int i;
    // for (i = 0; i< 4; ++i){
    //     printf("&x[%d] = %p\n", i, &x[i]);
    // }

    // printf("Address of array x: %p", x);

    
    // // Example 1: Pointers and Arrays
    // int i, x[6], sum = 0;
    // printf("Enter 6 numbers: ");
    // for (i = 0; i < 6; ++i){
    //     // Equivalent to scanf("%d", &x[i])

    //     scanf("%d", x+i);

    //     // Equivalent to sum += x[i]
    //     sum += *(x+i);
    // }

    // printf("Sum = %d", sum);


    // Example 2: Arrays and Pointers
    int x[5] = {1, 2, 3, 4, 5};
    int *ptr;

    // ptr is assigned the addressof the third element
    ptr = &x[2];

    printf("*ptr = %d \n", *ptr);
    printf("*(ptr+1) = %d \n", *(ptr+1));
    printf("*(ptr+1) = %d \n", *(ptr+2));

    return 0;
}