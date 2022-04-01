#include<stdio.h>

int recurFact(int num);

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, recurFact(num));
}

int recurFact(int num){
    if (num != 1){
        return num*recurFact(num-1);
    }
    return num;
}