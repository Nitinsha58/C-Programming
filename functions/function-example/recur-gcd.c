#include<stdio.h>


int recurGCD(int a, int b);
int main(){
    int a, b;
    printf("Enter the num1 and num2: ");
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d is %d", a, b, recurGCD(a, b));
}


int recurGCD(int a, int b){
    if (b != 0) {
        return recurGCD(b, a % b);
    }
    return a;
}