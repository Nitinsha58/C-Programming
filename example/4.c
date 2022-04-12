#include<stdio.h>

int main(){
    float num1, num2, mult;

    printf("Enter the num1:");
    scanf("%f", &num1);
    printf("Enter the num2:");
    scanf("%f", &num2);

    mult = num1*num2;

    printf("The product of %.2f and %.2f is %.2f", num1, num2, mult);
}