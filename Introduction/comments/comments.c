#include<stdio.h>

int main() {

	// Types of comments in C
	// 1. // - Single Line Comment
	// 2. /* */- Multi-line comment

    // create integer variable
    int age = 25;

    // print the age variable
    printf("Age : %d\n", age);



    /* 
    This program takes age input from the user
    It stores it in the age variable
    And. print teh value using printf()
    */

    int Age;
    printf("Enter your age: ");
    scanf("%d", &Age);

    printf("Your age is: %d", Age);

    return 0;
}
