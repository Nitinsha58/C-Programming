#include<stdio.h>

int main(){

    char chr;
    printf("Enter character: ");
    scanf("%c", &chr);

    if (chr >= 48 && chr <= 57){
        printf("%c is a digit.", chr);
    }else if (chr >= 65 && chr <= 90) {
        printf("%c is an uppercase alphabet.", chr);
    }else if (chr >= 97 && chr <= 122) {
        printf("%c is an lowercase alphabet.", chr);
    }else {
        printf("%c is a special character.", chr);
    }
}