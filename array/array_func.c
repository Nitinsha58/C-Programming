#include<stdio.h>

/*
    void display(int age1, int age2){
        printf("%d\n", age1);
        printf("%d\n", age2);
    }
*/


// int calculateSum(int num[]){

//     int sum = 0;

//     for (int i = 0; i < 4; ++i){
//         sum += num[i];
//     }

//     return sum;
// }


void displayNumbers(int num[2][2]){
    printf("Displaying: \n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            printf("%d\n", num[i][j]);
        }
    }
}


int main(){
    
    // Example 1: Pass individual array elements
    
    // int array[] = {2, 8, 4, 12};

    // // pass second and third elements to display()
    // display(array[1], array[2]);


    // // Example 2: pass array to functions
    // int array[] = {2, 8, 4, 12};

    // printf("Result = %.2d", calculateSum(array));
    // return 0;


    // Example 3. Pass two dimensional arrays

    int num[2][2];

    printf("Enter 4 numbers: \n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            scanf("%d", &num[i][j]);
        }
    }


    // Displaying numbers
    displayNumbers(num);

    return 0;
}

