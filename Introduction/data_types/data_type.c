#include<stdio.h>

int main()
{
	// // int data type
	// int id, age;


	// // float and double data type
	// float salary; // has byte size of 4 bytes.
	// double price; // has more byte size than float 8 bytes.

	// // char data type
	// char test = 'h'; // has byte size of 1 byte

	// // void data type
	// // void is an incomplete type. It means "nothing" or "no type". You can think of void as absent.

	// // short and long
	// // If you need to use a large number, you can use a type specifier long. 
	// long a; // stores integer values
	// long long b; // stores integer values
	// long double c; // stores decimal values

	// // Example
	// short a;
	// long b;
	// long long c;
	// long double d;

	// printf("size of short = %d bytes\n", sizeof(a));
	// printf("size of long = %d bytes\n", sizeof(b));
	// printf("size of long long = %d bytes\n", sizeof(c));
	// printf("size of long double= %d bytes\n", sizeof(d));



	// signed and unsigned
	// In C, signed and unsigned are type modifiers. You can alter the data storage of a data type by using them:
	// signed - allows for storage of both positive and negative numbers
	// unsigned - allows for storage of only positive numbers
	

	// // Example
	// // valid codes
	// unsigned int x = 35;
	// int y = -35; // signed int
	// int z = 36; // signed int

	// // invalid code: unsigned int cannot hold negative integers
	// unsigned int num = -35; // but didn't face any error
	// printf("z: %i, y: %i, num: %i", z, y, num);

	// Derived Data types
	// Data types that are derived from fundamental data types are derived types.
	// For example arrays, pointers, function types, structures, etc.

	// we will learn about these derived data types in later tutorials
	// 1. bool type
	// 2. Enumerated type
	// 3. Complex types
	return 0;
}

