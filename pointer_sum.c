#include<stdio.h>

int main(){

    int *num1, *num2, sum;
    int n1, n2;
    
    num1 = &n1;
    num2 = &n2;

    printf("Enter num1, num2:");
    scanf("%d %d",num1, num2);

    sum = *num1 + *num2;
    printf("Sum is %d", sum);
}