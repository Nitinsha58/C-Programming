#include<stdio.h>
#include<math.h>


int main(){


    // Example 1: 
    // Check whether a number is even or odd;

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num %2 == 0){
        printf("Number is Even");
    }else {
        printf("Number is Odd");
    }


    // Example 2: 
    // Check whether a character is vowel or consonant

    char chr;
    printf("Enter the character: ");
    scanf("%c", &chr);

    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u'){
        printf("Character is Vowel");
    }else {
        printf("Character is Consonent");
    }


    // Example 3: 
    // Find the larget number among the three numbers

    int num1, num2, num3;
    printf("Enter the num1, num2, num3: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3){
        printf("%d is greater than %d and %d", num1, num2, num3);
    }else if (num2 > num1 && num2 > num3) {
        printf("%d is greater than %d and %d", num2, num1, num3);
    }else {
        printf("%d is greater than %d and %d", num3, num2, num1);
    }


    // Example 4: 
    // Find all roots of a quadratic equation

    int a, b, c;
    double d, res1, res2;
    printf("Enter the variables a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    
    d = (b*b)- 4*a*c;
    res1 = -b + pow(d, 0.5);
    res2 = -b - pow(d, 0.5);

    printf("Res1: %.1lf and Res2: %.1lf", res1, res2);
    
    return 0;


    // Example 5: 
    // Check whether the entered year is Leap year or not

    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if (year % 400 == 0){
        printf("%d is a leap year", year);
    }else if (year % 4 == 0 && year % 100 != 0){
        printf("%d is a leap year", year);
    }else {
        printf("%d is not a leap year", year);
    }


    // Example 6: 
    // Check whether the number is negative, positive or zero

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 0){
        printf("%d is Postive", num);
    }else if (num < 0){
        printf("%d is Negative", num);
    }else {
        printf("%d is Zero",num);
    }


    // Example 7: 
    // Check whether the character is alphabet of not

    char chr;
    printf("Enter the character: ");
    scanf("%c", &chr);

    if ((chr >= 65 && chr <=90) || (chr >= 97 && chr <= 122) ) {
        printf("'%c' is an alphabet", chr);
    }else {
        printf("'%c' is not an alphabet", chr);
    }


    // Example 8: 
    // find the sum of natural numbers

    int num, sum = 0; 
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; ++i){
        sum += i;
    }
    printf("Sum of %d natural numbers is: %d ", num, sum);


    // Example 9: 
    // Find the factorial of a number
    int num, fact = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i<= num; ++i){
        fact *= i;
    }
    printf("Factorial of %d is: %d", num, fact);


    // Example 10: 
    // Generate multiplication table
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i<=10; ++i){
        printf("%d x %d = %d\n", num, i, num*i);
    }


    // Example 11: 
    // Display Fibonacci series

    int c, a = 0, b = 1;
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("%d\n", a);
    printf("%d\n", b);
    
    while (num > 0){
        c = a;
        a = b;
        b = b + c;
        printf("%d\n", b);
        --num;
    }


    // // Example 12: 
    // Find HCF of two numbers
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d%d", &num1, &num2);

    int gcd = 1;

    for (int i = 1; i <= num1 && i <= num2; ++i){
        if (num1% i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    printf("%d", gcd);


    // // Example 13: 
    // Find LCM of two numbers
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d%d", &num1, &num2);

    int lcm = 1;
    int max = (num1 > num2)? num1: num2;
    
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("The lcm is: %d", max);
            break;
        }
        ++max;
    }


    // // Example 14: 
    // Count number of digits in a number;
    int num1, count=0;
    printf("Enter num1 : ");
    scanf("%d", &num1);

    while (num1){
        count += 1;
        num1 = num1/10;
    }
    printf("The number of digits are: %d", count);


    // Example 15:
    // Reverse a number
    int num1, digit;
    printf("Enter num1 : ");
    scanf("%d", &num1);

    while (num1){
        digit = num1%10;
        num1 = num1/10;
        printf("%d", digit);
    }


    // Example 16:
    // Calculate the power of a number
    int base, exp;
    long int result = 1;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    while (exp != 0)
    {
        result = result * base;
        --exp;
    }
    printf("The Result is %d", result);


    // Example 17:
    // Check whether the number is palindrom or not

    int num, reversed=0, remainder, original;
    printf("Enter the number: ");
    scanf("%d", &num);

    original = num;
    while (num)
    {
        remainder = num%10;
        num /= 10;
        reversed = reversed*10 + remainder;
    }
    if (original == reversed){
        printf("%d is a palindrome", original);
    }else {
        printf("%d is not a palindrome", original);
    }


    // Example 18:
    // Check whether the number is prime or not
    int num, flag = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 1 || num == 2){
        flag = 0;
    }

    for (int i = 2; i < num; ++i){
        if (num%i == 0){
            flag = 1;
            break;
        }
    }
    
    if (flag == 0){
        printf("The number is prime");
    }else {
        printf("The number is not prime");
    }


    // Example 19:
    // Display prime numbers between two intervals

    int first_num, last_num;
    printf("Enter the starting num: ");
    scanf("%d", &first_num);
    
    printf("Enter the end num: ");
    scanf("%d", &last_num);

    for (int num = first_num; num <= last_num; ++num){
        int flag = 0;
        
        for (int i = 2; i < num; ++i){
            if (num%i == 0){
                flag = 1;
                break;
            }
        }
        if (flag==0){
            printf("%d\n", num);
        }
    }


    // Example 20:
    // Check Armstrong number;
    unsigned int num, len = 0, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);
    int count = num, original = num;

    while (count)
    {
        count /= 10;
        ++len;
    }

    while (num)
    {   
        sum += round(pow(num % 10, len));
        num /= 10;
    }
    if (sum == original){
        printf("The number is armstrong\n");
    }else {
        printf("The number is not armstrong");
    }


    // Example 21:
    // Display armstrong numbers between two intervals

    int first_num, last_num;

    printf("Enter the first number: ");
    scanf("%d", &first_num);

    printf("Enter the last number: ");
    scanf("%d", &last_num);

    for (int num = first_num; num <= last_num; ++num){
        int len = 0, sum = 0;
        int count = num, original = num, var = num;

        while (count)
        {
            count /= 10;
            ++len;
        }

        while (var)
        {   
            sum += round(pow(var % 10, len));
            var /= 10;
        }
        if (sum == original){
            printf("%d\n", original);
        }
    }
    
    
    // Example 22;
    // Display factors of a number

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i<= num; ++i){
        if (num%i == 0){
            printf("%d\n", i);
        }
    }

    
    // Example 23
    // print pyramids and triangles

    for (int i = 1; i < 6; ++i){

        for (int j = 5; j > i; --j){
            printf(" ");
        }
        for (int j = 0; j < i; ++j){
            printf("*");
        }
        for (int j = 1; j < i; ++j){
            printf("*");
        }
        printf("\n");
    }


    // Example 24;
    // Create a simple calculator

    char ch;
    int num1, num2;
    printf("Enter the operator: +,-,*,/: ");
    scanf("%c", &ch);

    printf("Enter num1 and num2: ");
    scanf("%d%d", &num1, &num2);

    switch (ch){
    case '+':
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %d", num1, num2, num1 / num2);
        break;
    case '%':
        printf("%d % %d = %d", num1, num2, num1 % num2);
        break;
    
    default:
        break;
    }



    return 0;
}