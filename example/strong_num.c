#include<stdio.h>


int fact(int num );

int main(){
    int num, digit, sum = 0;
    printf("Enter num: ");
    scanf("%d", &num);
    int temp = num;

    while (num > 0){
        digit = num % 10;
        num = num / 10;
        sum = sum + fact(digit);
    }

    if (temp == sum){
        printf("%d is a strong number", temp);
    }else{
        printf("%d is not a strong number", temp);
    }
}


int fact(int num){
    int factNum = 1;

    while (num > 0){
        factNum = factNum*num;
        num--;
    }

    return factNum;
}