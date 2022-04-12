#include<stdio.h>

int main(){
    int num1, num2, quotient, remainder;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    quotient = num1/num2;

    remainder = num1%num2;

    printf("Quotient: %d, Remainder: %d", quotient, remainder);
}