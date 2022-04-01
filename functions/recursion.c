#include<stdio.h>

int sum(int n);

int main(){
    int number, result;
    printf("Enter the number: ");
    scanf("%d", &number);

    result = sum(number);

    printf("Sum = %d", result);

    return 0;
}

int sum(int n){
    if (n != 0){
        // Sum() function calls itself
        return n + sum(n-1);
    }else {
        return n;
    }
}