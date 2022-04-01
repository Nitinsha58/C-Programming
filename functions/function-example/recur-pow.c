#include<stdio.h>


int recurPow(int a, int b);
int main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("power of %d is %d: %d", a, b, recurPow(a, b));
}

int recurPow(int a, int b){
    if (b != 0){
        return a * recurPow(a, b-1);
    }
    return 1;
}