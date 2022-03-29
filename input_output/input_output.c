#include<stdio.h>

int main() {

	// // Output
	// // Displays the string inside quotations
	// printf("C Programming");


	// // Input
	// // Example 1 (Integer)
	// int testInteger;
	// printf("Enter an integer: ");
	// scanf("%d", &testInteger);
	// printf("Number = %d", testInteger);


	// // Example 2 (float and double)
	// float num1;
	// double num2;

	// printf("Enter a number: ");
	// scanf("%f", &num1);
	// printf("Enter another number: ");
	// scanf("%lf", &num2);

	// printf("num1: %g\n", num1);
	// printf("num2: %lg", num2);


	// // Example 3 (Character)
	// char chr;
	// printf("Enter a character: ");
	// scanf("%c", &chr);

	// printf("You entered %c", chr);

	
	// // Example 4 (ASCII Value)
	// char chr;
	// printf("Enter a character: ");
	// scanf("%c", &chr);

	// // When  %c is used, a character is displayed
	// printf("You entered %c. \n", chr);

	// // When %d is used, ASCII value is displayed
	// printf("ASCII value is %d", chr);


	// Example 5 (Multiple values)
	int a;
	float b;

	printf("Enter integer and then a float: ");

	// Taking multiple inputs
	scanf("%d%f", &a, &b);

	printf("You entered %d and %f", a, b);

	return 0;
}
