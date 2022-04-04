#include<stdio.h>

const int CITY = 2;
const int WEEK = 7;

int main(){
    

    // // initialization of multi-dimensional array
    // float x[3][4];
    // float y[2][4][3];

    // // 2d array
    // int a[2][3] = {{1, 3, 0}, {-1, 5, 9}};
    // int b[][3] = {{1, 3, 0}, {-1, 5, 9}};
    // int c[2][3] = {1, 2, 3, 4, 5, 6};
    
    // // 3d array
    // int test[2][3][4] = {
    //     {
    //         {3, 4, 2, 3},
    //         {0, -3, 9, 11},
    //         {23, 12, 23, 2}
    //     },
    //     {   {3, 4, 2, 3},
    //         {0, -3, 9, 11},
    //         {23, 12, 23, 2}
    //     }
    // };

    // // Example 1. program to store temperature of two cities of a week and display it.
    // int temperature[CITY][WEEK];

    // // using nested loop to store values in a 2d array
    // for (int i = 0; i < CITY; ++i){
    //     for (int j = 0; j < WEEK; ++j){
    //         printf("City %d, Day %d: ", i+1, j+1);
    //         scanf("%d", &temperature[i][j]);
    //     }
    // }

    // printf("\nDisplaying values: \n\n");

    // // using nested loop to display values of a 2d array
    // for (int i = 0; i < CITY; ++i){
    //     for (int j = 0; j < WEEK; ++j){
    //         printf("City %d, Day %d = %d\n", i+1, j+1, temperature[i][j]);
    //     }
    // }


    // Program to find teh sum of two matrices of order 2*2

    float a[2][2], b[2][2], result[2][2];

    // Taking input using nested for loop
    printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%f", &b[i][j]);
        }
    }

    // adding elements of the matrix
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            // scanf("%f", &b[i][j]);
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrix: \n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            printf("%.1f\t ", result[i][j]);
        }
        printf("\n");
    }
    
}
