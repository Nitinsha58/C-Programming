#include<stdio.h>

int main(){
    // Program to check whether a number is even or odd

    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Number is Even!");
    }else {
        printf("Number is Odd!");
    }
}