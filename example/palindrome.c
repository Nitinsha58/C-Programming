#include<stdio.h>


int main() {
    int num, sum = 0, temp, digit;

    printf("Enter num:");
    scanf("%d", &num);
    temp = num;

    while (num > 0){
        
        digit = num % 10;
        num /= 10;
        if (sum){
            sum = sum * 10 + digit;
        }else {
            sum = sum + digit;
        }
    }

    if (temp == sum){
        printf("%d is a palindrome number", temp);
    }else{
        printf("%d is not a palindrome number", temp);
    }
}