#include<stdio.h>

int main() {
    int sum = 0, num, i = 1, count = 1;

    printf("Enter num: ");
    scanf("%d", &num);

    while (num > 0 && i <= num){
        if (count % 2 != 0){
            sum += count;
            i++;
            count++;
            printf("%d ", count);
        }else {
            count++;
        }
    }
    printf("\n%d is the sum of %d odd natural numbers", sum, num);
}