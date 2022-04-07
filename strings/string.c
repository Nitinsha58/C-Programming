#include<stdio.h>


// void displayString(char str[]);

int main(void){

    // // Initialize strings
    // char c[] = "abcd";
    // // char c[50] = "abcd";
    // // char c[] = {'a', 'b', 'c', 'd', 'e','\0'};
    // // char c[6] = {'a', 'b', 'c', 'd', 'e','\0'};

    // printf("Data is: %s", c);


    // // Read string from the user
    // char name[20];
    // printf("Enter name: ");
    // scanf("%s", name);
    // printf("Your name is %s.", name);


    // // Example 2: fgets() and puts()
    // char name[30];
    // printf("Enter name: ");
    // fgets(name, sizeof(name), stdin); // read string
    // printf("Name: ");
    // puts(name); // display string


    // // Example 3: Passing string to a Function
    // char str[50];
    // printf("Enter string: ");
    // fgets(str, sizeof(str), stdin);
    // displayString(str); // Passing string to a function


    // // Example 4: Strings and Pointers
    //     char name[] = "Harry Potter";

    //     printf("%c", *name); // Output: H
    //     printf("%c", *(name+1)); // Output: a
    //     printf("%c", *(name+7)); // Output: o

    //     char *namePtr;
    //     namePtr = name;

    //     printf("%c", *namePtr); // Output: H
    //     printf("%c", *(namePtr + 1)); // Output: a
    //     printf("%c", *(namePtr + 7)); // Output: o
    return 0;
}


// void displayString(char str[]) {
//     printf("String Output: ");
//     puts(str);
// }