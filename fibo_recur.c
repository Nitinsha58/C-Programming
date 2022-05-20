#include<stdio.h> 


int fibo(int, int, int);

int main(){

    int num1=0, num2=1, len;
    printf("Enter the number of terms: ");
    scanf("%d", &len);
    fibo(num1, num2, len-2);

}

int fibo(int a, int b, int len) {
    if (a == 0){
        printf("0\n");
    }
    printf("%d\n", b);
    if (len > 0){
        fibo(b, a + b, len-1);
    }
}