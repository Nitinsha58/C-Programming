#include<stdio.h>

int swap(int*, int*);

int main(){
    int n1, n2;

    printf("Enter num1, num2:");
    scanf("%d, %d", &n1, &n2);


    printf("Before Swap: num1=%d, num2=%d\n", n1, n2);
    swap(&n1, &n2);
    printf("After Swap: num1=%d, num2=%d", n1, n2);
}

int swap(int *n1, int *n2){
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}