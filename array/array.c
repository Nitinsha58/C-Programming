#include<stdio.h>

int main(){
    // // Create an array
    // int mark[5] = {123, 23, 33, 24, 5};
    // // Also create an array
    // int marks[] = {1, 2, 3, 4, 5};

    // for (int i=0; i < 5; ++i){
    //     printf("mark[%d] is equal to %d\n",i, mark[i]);
    //     mark[i] = 1;
    // }


    // // Example 1: Array input
    // int values[5];

    // printf("Enter 5 integers: ");

    // // taking input and strong it in an array
    // for (int i = 0; i < 5; ++i){
    //     scanf("%d", &values[i]);
    // }

    // printf("Displaying integers: \n");

    // // printing elements
    // for (int i = 0; i < 5; ++i){
    //     printf("%d * 2 = %d\n",values[i],  values[i] * 2);
    // }
    // return 0;


    // Example 2: Calcualte average 
    int marks[10], n, sum = 0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; ++i){
        scanf("%d", &marks[i]);
        
        // adding integers entered by the user to the sum variable
        sum += marks[i];
    }

    average = sum/n;
    printf("Average = %d", average);
    return 0;               
}
