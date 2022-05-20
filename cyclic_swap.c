#include<stdio.h>

int swap(int *n1, int *n2, int *n3);

int main(){

    int  num1, num2, num3;
    printf("Enter num1, num2, num3: "); 
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Before Swap: %d %d %d\n",num1, num2, num3);
    swap(&num1, &num2, &num3);
    printf("After Swap: %d %d %d",num1, num2, num3);
}

int swap(int *n1, int *n2, int *n3){
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = *n3;
    *n3 = temp;
}