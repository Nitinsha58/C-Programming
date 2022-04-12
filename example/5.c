#include<stdio.h>

int main(){

    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);

    printf("The ASCII value of %c is %d", chr, chr);
}