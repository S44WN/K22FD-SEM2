// %d or %i	It is used to print the signed integer value where signed integer means that the variable can hold both positive and negative values.
// %u	It is used to print the unsigned integer value where the unsigned integer means that the variable can hold only positive value.
// %o	It is used to print the octal unsigned integer where octal integer value always starts with a 0 value.
// %x	It is used to print the hexadecimal unsigned integer where the hexadecimal integer value always starts with a 0x value. In this, alphabetical characters are printed in small letters such as a, b, c, etc.
// %X	It is used to print the hexadecimal unsigned integer, but %X prints the alphabetical characters in uppercase such as A, B, C, etc.
// %f	It is used for printing the decimal floating-point values. By default, it prints the 6 values after '.'.
// %e/%E	It is used for scientific notation. It is also known as Mantissa or Exponent.
// %g	It is used to print the decimal floating-point values, and it uses the fixed precision, i.e., the value after the decimal in input would be exactly the same as the value in the output.
// %p	It is used to print the address in a hexadecimal form.
// %c	It is used to print the unsigned character.
// %s	It is used to print the strings.
// %ld	It is used to print the long-signed integer value.

#include <stdio.h>

int formatSpecifier()
{
    int a = 10;
    float b = 10.5;
    char c = 'A';
    char d[] = "Hello World";
    printf("Integer value is %d and %i and %u and %o and %x and %X and %p and %c and %s", a, a, a, a, a, a, &a, c, d); // %d, %i, %u, %o, %x, %X, %p, %c, %s
    printf(" and %f and %e and %E and %g", b, b, b, b);                                                                // %f, %e, %E, %g
    return 0;
}

// Output:
// Integer value is 10 and 10 and 10 and 12 and a and A and 0x7ffccf0c9a0c and A and Hello World and 10.500000 and 1.050000e+01 and 1.050000E+01 and 10.5

// float and double are two different data types in C. The float data type is used to store the single-precision floating-point values, and the double data type is used to store the double-precision floating-point values. The float data type is used to store the 32-bit floating-point values, and the double data type is used to store the 64-bit floating-point values. The float data type is used to store the 32-bit floating-point values, and the double data type is used to store the 64-bit floating-point values.
int floatDoubleDifference()
{
    float a = 10.512345678;
    double b = 10.5123456789023456789;
    printf("Float value is %0.8f and Double value is %0.12lf", a, b);
    return 0;
}

// Output:
// Float value is 10.51234579 and Double value is 10.512345678902

int main()
{
    formatSpecifier();
    floatDoubleDifference();
    return 0;
}

// find the largest of three number using ternary operator
// whta is ternary operator in c
// ternary operator in c - is a conditional operator that takes three operands.
// It is also known as the conditional operator. It is used to evaluate a condition and
// return a value based on the result of the condition. It is also known as the conditional operator.
// It is used to evaluate a condition and return a value based on the result of the condition.
// Syntax: (condition) ? expression1 : expression2;

#include <stdio.h>

int main()
{
    // int a = 10, b = 20, c = 30;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest number is %d", largest);
    return 0;
}
