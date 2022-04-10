#include<stdio.h>

typedef struct complex {
    float real;
    float imag;
} complex;


complex compNum(complex n1, complex n2);

int main(){
    complex n1, n2, result;

    printf("Enter first complex number: \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("Enter second complex number: \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);
    
    result = compNum(n1, n2);

    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    
    return 0;
}


complex compNum(complex n1, complex n2){
    complex result;

    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;

    return (result);
}