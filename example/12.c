#include<stdio.h>

int main(){
    // Program to find the largest number among three numbers

    int num1 = 2, num2 = 3, num3 = 1;

    if (num1 > num2 && num1 > num3){
        printf("%d is greatest", num1);
    }else if (num2 > num1 && num2 > num3){
        printf("%d is greatest", num2);
    }else {
        printf("%d is greatest", num3);
    }
}