#include<stdio.h>

int fact(int);

int main(){

    int num;
    printf("Enter the number:  ");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, fact(num));
}

int fact(int num) {
    if (num == 1){
        return 1;
    }

    return num * fact(num - 1);
}