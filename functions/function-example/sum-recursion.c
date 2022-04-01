#include<stdio.h>

int sum(int num);

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Sum of %d natural number is: %d", num, sum(num));
}

int sum(int num){
    if (num != 0){
        return num + sum(num-1);
    }
    return num;
}