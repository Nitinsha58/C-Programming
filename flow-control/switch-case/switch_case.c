#include<stdio.h>

int main(){

    // Program to create a simple calculator
    char operator;
    double n1, n2;

    printf("Enter The Operator: ");
    scanf("%c", &operator);

    printf("Enter num1 and num2: ");
    scanf("%lf%lf", &n1, &n2);

    switch (operator){
    case '+':
        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
        break;
    
    case '-':
        printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
        break;
    
    case '*':
        printf("%.1lf * %.1lf = %.1lf", n1, n2, n1*n2);
        break;
    
    case '/':
        printf("%.1lf / %.1lf = %.1lf", n1, n2, n1/n2);
        break;
    
    default:
        printf("Error! operator is not correct");
        break;
    }
    return 0;
}