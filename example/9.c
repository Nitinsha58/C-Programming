#include<stdio.h>

int main(){
    // program to swap two numbers

    int num1 = 143, num2=532;

    printf("Before Swapping: num1:%d, num2:%d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swapping: num1:%d, num2:%d\n", num1, num2);

}