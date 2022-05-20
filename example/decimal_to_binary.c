#include<stdio.h>

int main() {
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    while (num >= 1) {
        printf("%d", num%2);
        num = num / 2;
    }
}