#include<stdio.h>

int isPrime(int num);


int main(){

    int num, flag = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num/2; ++i){
        if (isPrime(i) == 1){
            if (isPrime(num-i) == 1){
                printf("%d = %d + %d\n", num, i, num - i);
                flag = 1;
            }
        }
    }

    if (flag == 0){
        printf("%d cannot be expressed as the sum of two prime numbers.", num);
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