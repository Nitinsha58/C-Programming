#include<stdio.h>

int main(){
    /*
        Operator        Meaning of operator
        +               addition or unary plus
        -               subtraction or unary minus
        *               multiplication
        /               division
        %               remainder after division (modulo division)    
    */

    // // Example 1. Arithmetic Operators
    // int a = 9, b = 4;
    // printf("a+b: %d \n", a+b);
    // printf("a-b: %d \n", a-b);
    // printf("a*b: %d \n", a*b);
    // printf("a/b: %d \n", a/b);
    // printf("Remainder when a divided by b: %d \n", a%b);

    
    /* C Increment and Decrement Operators
    C Programming has two operators increment ++
    and decrement -- to change the value of an
    operand (constant or variable) by 1.
    */ 
    
    // Example 2: Increment Decrement operator
    // int a = 10, b = 100;
    // float c = 10.5, d = 100.5;

    // printf("++a = %d\n", ++a);
    // printf("--b = %d\n", --b);
    // printf("++c = %g\n", ++c);
    // printf("--d = %g\n", --d);


    /*
    C Assignment Operators
    operator        Example         Same as
    =               a = b           a = b
    +=              a += b          a = a + b
    -=              a -= b          a = a - b
    *=              a *= b          a = a * b
    /=              a /= b          a = a / b
    %=              a %= b          a = a % b
    */

    // Example 3. Assignment Operators

    // int a = 5, c;
    // c = a;
    // printf("c = %d\n", c);
    // c += a;
    // printf("c = %d\n", c);
    // c -= a;
    // printf("c = %d\n", c);
    // c *= a;
    // printf("c = %d\n", c);
    // c /= a;
    // printf("c = %d\n", c);
    // c %= a;
    // printf("c = %d\n", c);


    /* Example 3. Assignment Operators
    A relational operator checks the relationship between
    two operands. If the relation is true, it returns 1;
    If the relation is fale, it returns value 0.
    Operator    Meaning         Example
    ==          Equal to        5 == 3 is evaluated to 0
    >           greater than    5 > 3 is evaluated to 1
    <           less than       5 < 3 is evaluated to 0
    !=          not equal to    5 != 3 is evaluated to 1
    
    >=          greather than or equal to   5 >= 3 is evaluated to 1
    <=          less than or equal to       5 <= 3 is evaluated to 0
    */

    // // Example 4. Relational Operators
    // int a = 5, b = 5, c = 10;
    // printf("%d == %d is %d \n", a, b, a == b);
    // printf("%d == %d is %d \n", a, c, a == c);
    // printf("%d > %d is %d \n", a, b, a > b);
    // printf("%d > %d is %d \n", a, c, a > c);
    // printf("%d < %d is %d \n", a, b, a < b);
    // printf("%d < %d is %d \n", a, c, a < c);
    // printf("%d != %d is %d \n", a, b, a != b);
    // printf("%d != %d is %d \n", a, c, a != c);
    // printf("%d >= %d is %d \n", a, b, a >= b);
    // printf("%d >= %d is %d \n", a, c, a >= c);
    // printf("%d <= %d is %d \n", a, b, a <= b);
    // printf("%d <= %d is %d \n", a, c, a <= c);


    /* C Logical Operators
    An expression containing logical operator returns either 0 or 1

    Operator    meaning                 example
    &&          Logical AND, True       c = 5 and d = 2
                only if all operands    ((c==5) && (d>5)) equals to 0
                are true
    ||          Logical OR, True only   c = 5 and d = 2
                if either operands      ((c==5) || (d>5)) equals to 1
                are true
    !           Logical NOT, True only  c = 5 
                if operand is 0         !((c==5)) equals to 1
    */

    // // Example 5. Logical Operators
    // int a = 5, b = 5, c = 10, result;

    // result = (a == b) && (c > b);
    // printf("(a == b) && (c > b) is %d \n", result);

    // result = (a == b) && (c < b);
    // printf("(a == b) && (c < b) is %d \n", result);

    // result = (a == b) || (c < b);
    // printf("(a == b) || (c < b) is %d \n", result);

    // result = (a != b) || (c < b);
    // printf("(a != b) || (c < b) is %d \n", result);

    // result = !(a != b);
    // printf("!(a != b) is %d \n", result);

    // result = !(a == b);
    // printf("!(a == b) is %d \n", result);



    /*
    during computation, mathematical operations like:
    addition, subtraction, multiplication, division, 
    etc are converted to bit-level which makes processing
    faster and saves power.

    Operators       Meaning of operators
    &               Bitwise AND
    |               Bitwise OR
    ^               Bitwise exclusive OR
    ~               Bitwise complement
    <<              Shift Left
    >>              Shift Rgiht
    */



    /* The sizeof operator
    The sizeof is a unary operator that returns the 
    size of data (constants, variables, array, structure, 
    etc)
    */

    // // Example 6. sizeof Operator
    // int a;
    // float b;
    // double c;
    // char d;
    // printf("Size of int=%lu bytes\n",sizeof(a));
    // printf("Size of float=%lu bytes\n",sizeof(b));
    // printf("Size of double=%lu bytes\n",sizeof(c));
    // printf("Size of char=%lu byte\n",sizeof(d));

    return 0;
}