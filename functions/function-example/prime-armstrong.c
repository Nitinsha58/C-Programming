#include<stdio.h>
#include<math.h>

int isPrime(int num);
int isArmstrong(int num);

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (isPrime(num)){
        printf("%d is a prime number\n", num);
    }else {
        printf("%d is not a prime number\n", num);
    }
    
    if (isArmstrong(num)){
        printf("%d is an armstrong number\n", num);
    }else {
        printf("%d is not an armstrong number\n", num);
    }

}

int isPrime(int num){
    if (num == 1 || num == 2){
        return 1;
    }

    for (int i = 2; i < num; ++i){
        if (num % i == 0){
            return 0;
            break;
        }
    }
    return 1;
}

int isArmstrong(int num){
    int len = 0, original = num, count = num;
    int digit, sum = 0;
    while (count)
    {
        ++len;
        count /= 10;
    }

    while (num)
    {
        digit = num % 10;
        sum += pow(digit, len);
        num /= 10;
    }

    if (sum == original){
        return 1;
    }else {
        return 0;
    }
    
}