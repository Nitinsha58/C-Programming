#include<stdio.h>
#include<math.h>


int decimalToOctal(int decNum);
int octalToDecimal(int octNum);

int main(){

    int Num;
    printf("Enter the decimal: ");
    scanf("%d", &Num);
    printf("%d => %d\n", Num, decimalToOctal(Num));

    int octNum;
    printf("Enter the Octal: ");
    scanf("%d", &octNum);
    printf("%d => %d", Num, octalToDecimal(octNum));

}

int decimalToOctal(int decNum){
    int octNumber = 0, i = 1, rem;

    while (decNum != 0){
        rem = decNum % 8;
        octNumber += rem * i;
        decNum /= 8;
        i *= 10;
    }
}

int octalToDecimal(int octNum){
    int decNumber = 0, i = 0;

    while (octNum != 0)
    {
        decNumber += (octNum % 10) * pow(8, i);
        octNum /= 10;
        ++i;
    }
    return decNumber;
}