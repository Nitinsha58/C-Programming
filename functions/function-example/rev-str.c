#include<stdio.h>


void revStr();

int main(){
    printf("Enter a sentence: ");
    revStr();
    return 0;

}

void revStr(){
    char c;
    scanf("%c", &c);
    if (c != '\n'){
        revStr();
        printf("%c", c);
    }
}