#include<stdio.h>

int main(){
    int num1, num2, sum;

    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of %d and %d is %d", num1, num2, sum);

    return 0;
}