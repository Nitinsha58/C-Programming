#include<stdio.h>

int main(){

    // Program to check whether a character is a Vowel or Consonant

    char c;
    printf("Enter the character: ");
    scanf("%c", &c);

    int lowercase_vowel, uppercase_vowel;

    lowercase_vowel = ( c == 'a' || c == 'e' || c == 'i' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel = ( c == 'A' || c == 'E' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase_vowel || uppercase_vowel){
        printf("Character is a vowel!");
    }else {
        printf("Character is a consonent!");
    }
}