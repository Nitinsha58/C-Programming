#include<stdio.h>


int expo(int value, int pow);

int main(){

    int num, pow;

    printf("Enter num and pow:");
    scanf("%d %d", &num, &pow);

    printf("%d is %d to the power %d", num, pow, expo(num, pow));
}

int expo(int value, int pow){
    if (pow == 1) {
        return value;
    }
    return value*expo(value, pow-1);
}