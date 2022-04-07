#include <stdio.h>
#include <string.h>
#include <ctype.h>

// void reverseSentence();

int main(){
    // // Example 1: Find the frequency of a character in a string
    // char str[100], ch;
    // int count = 0;

    // printf("Enter a string: ");
    // fgets(str, sizeof(str), stdin);

    // printf("Enter a character to find its frequency: ");
    // scanf("%c", &ch);

    // for (int i = 0; str[i] != '\0'; ++i){
    //     if (ch == str[i]){
    //         ++count;
    //     }
    // }

    // printf("Frequency of %c = %d", ch, count);


    // // Example 2: Program to count vowels , consonants, digits and white spaces
    // char line[50];
    // int vowels, consonant, digit, space;

    // // initialize all variables to 0
    // vowels = consonant = digit = space = 0;

    // // get full line of string input
    // printf("Enter a line of string: ");
    // fgets(line, sizeof(line), stdin);

    // // loop through each character of the string
    // for (int i = 0; line[i] != '\0'; ++i){
        
    //     // convert character to lowercase
    //     line[i] = tolower(line[i]);

    //     // check if the character is a vowel
    //     if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u'){
    //         // increment value of vowels by 1
    //         ++vowels;
    //     }else if (line[i] > 'a' && line[i] <= 'z'){
    //         ++consonant;
    //     }

    //     // check if the character is a digit
    //     else if (line[i] > '0' && line[i] <= '9'){
    //         ++digit;
    //     }

    //     // check if the character is an empty space
    //     else if (line[i] == ' '){
    //         ++space;
    //     }
    // }

    // printf("Vowels: %d", vowels);
    // printf("\nConsonants: %d", consonant);
    // printf("\nDigits: %d", digit);
    // printf("\nWhite spaces: %d", space);


    // // Example 3: Reverse a string using recursion
    // printf("Enter a sentence: ");
    // reverseSentence();


    // // Example 4: Find the length of a string
    // char str[50];
    // int i;
    // printf("Enter the string: ");
    // fgets(str, sizeof(str), stdin);

    // for (i = 0; str[i] != '\0'; ++i);
    // printf("The length of string is: %d", i-1);
 

    // // Example 5: Concatenate two strings
    // char s1[100] = "Hello", s2[] = " this is Nitin";
    // int length, j;

    // // store length of s1 in the length variable
    // length = 0;
    // while (s1[length] != '\0'){
    //     ++length;
    // }

    // for (j = 0; s2[j] != '\0'; ++j, ++length){
    //     s1[length] = s2[j];
    // }

    // // terminating the str1 string
    // s1[length] = '\0';

    // printf("After concatenation: ");
    // puts(s1);
 

    // // Example 6: Program to copy a string
    // char s1[100], s2[] = "this is Nitin";
    // int length, j;

    // // store length of s1 in the length variable
    // length = 0;
    // for (j = 0; s2[j] != '\0'; ++j, ++length){
    //     s1[length] = s2[j];
    // }

    // // terminating the str1 string
    // s1[length] = '\0';

    // printf("After Copy: ");
    // puts(s1);


    // // Example 7: Remove all characters in a string except alphabets 
    // char s1[100], s2[] = "this is23 Nitin", ch;
    // int length, j;

    // // store length of s1 in the length variable
    // length = 0;
    // for (j = 0; s2[j] != '\0'; ++j){
    //     ch = tolower(s2[j]);
    //     if (ch > 'a' && ch <= 'z'){
    //         s1[length] = s2[j];
    //         ++length;
    //     }
    // }

    // // terminating the str1 string
    // s1[length] = '\0';

    // printf("After Copy: ");
    // puts(s1);


    // // Sort elements in the lexicographical order (dictionary order)
    // char str[5][50], temp[50];
    // printf("Enter 5 words: ");

    // // Getting strings input
    // for (int i = 0; i < 5; ++i){
    //     fgets(str[i], sizeof(str[i]), stdin);
    // }

    // // storing strings in the lexicographical order
    // for (int i = 0; i < 5; ++i){
    //     for (int j = i + 1; j < 5; ++j){
    //         // Swapping strings if they are not in the lexicographical order
    //         if (strcmp(str[i], str[j]) > 0){
    //             strcpy(temp, str[i]);
    //             strcpy(str[i], str[j]);
    //             strcpy(str[j], temp);
    //         }
    //     }
    // }
    // printf("\nIn the lexicographical order: \n");
    // for (int i = 0; i < 5; ++i){
    //     fputs(str[i], stdout);
    // }    

    return 0;
}

// void reverseSentence() {
//     char c;
//     scanf("%c", &c);
//     if (c != '\n'){
//         reverseSentence();
//         printf("%c", c);
//     }
// }