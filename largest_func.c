#include<stdio.h>

int largest(int, int, int);

int main() {

    int x, y, z;
    printf("Enter num1, num2, num3");
    scanf("%d, %d, %d", &x, &y, &z);

    printf("%d is largest", largest(x, y, z));
}


int largest(int a, int b, int c){
    if (a > b && b > c){
        return a;
    }else if(b > a && b > c){
        return b;
    }else {
        return c;
    }
}