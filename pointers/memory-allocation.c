#include<stdio.h>
#include<stdlib.h>

int main(){

    // // Example 1: malloc() and free()
    // // Program to clculate the sum of n numbers entered by the user

    // int n, i, *ptr, sum = 0;

    // printf("Enter number of elements: ");
    // scanf("%d", &n);
    // ptr = (int*) malloc(n*sizeof(int));

    // // if memory cannot be allocated
    // if (ptr == NULL){
    //     printf("Error! memory not allocated.");
    //     exit(0);
    // }

    // printf("Enter Elements: ");
    // for ( i = 0; i < n; ++i)
    // {
    //     scanf("%d", ptr+i);
    //     sum += *(ptr + i);
    // }

    // printf("Sum = %d", sum);


    // // deallocating the memory
    // free(ptr);


    // // Example 2: calloc() and free()
    // // Program to calculate the sum of n numbers entered by the user

    // int n, i, *ptr, sum = 0;
    // printf("Enter number of elements: ");
    // scanf("%d", &n);
    
    // ptr = (int*) calloc(n, sizeof(int));
    // if (ptr == NULL){
    //     printf("Error! memory not allocated.");
    //     exit(0);
    // }

    // printf("Enter elements: ");
    // for(i = 0; i < n; ++i){
    //     scanf("%d", ptr+i);
    //     sum += *(ptr+i);
    // }

    // printf("Sum = %d", sum);
    // free(ptr);


    // Example 3: realloc()

    int *ptr, i, n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1*sizeof(int));

    printf("Addresses of previously allocated memory:\n");
    for(i = 0; i < n1; ++i){
        printf("%p\n", ptr+i);
    }

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // reallocating the memory
    ptr = realloc(ptr, n2*sizeof(int));

    printf("Addresses of newly allocated memory: \n");
    for(i = 0; i < n2; ++i){
        printf("%p\n", ptr+i);
    }
    free(ptr);
    
    return 0;
}