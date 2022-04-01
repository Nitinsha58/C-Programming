#include<stdio.h>
#include<math.h>

long long decimalToBinary(int num);
int binaryToDecimal(long long num);
int main(){
    int num;
    long long bnum;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d => %d\n", num, decimalToBinary(num));

    printf("Enter the binary digit: ");
    scanf("%lld", &bnum);
    printf("%lld => %d", bnum, binaryToDecimal(bnum));
}


long long decimalToBinary(int num){
    long long bin = 0;
    int rem, i = 1;

    while (num!=0)
    {
        rem = num % 2;
        num /= 2;
        bin += rem*i;
        i *= 10;
    }
    return bin;
}

int binaryToDecimal(long long num){
    int dec = 0, i = 0, rem;

    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        dec += rem*pow(2, i);
        ++i;
    }
    return  dec;
}