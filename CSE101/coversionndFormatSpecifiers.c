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

// int formatSpecifier()
// {
//     int a = 10;
//     float b = 10.5;
//     char c = 'A';
//     char d[] = "Hello World";
//     printf("Integer value is %d and %i and %u and %o and %x and %X and %p and %c and %s", a, a, a, a, a, a, &a, c, d); // %d, %i, %u, %o, %x, %X, %p, %c, %s
//     printf(" and %f and %e and %E and %g", b, b, b, b);                                                                // %f, %e, %E, %g
//     return 0;
// }

// Output:
// Integer value is 10 and 10 and 10 and 12 and a and A and 0x7ffccf0c9a0c and A and Hello World and 10.500000 and 1.050000e+01 and 1.050000E+01 and 10.5

// float and double are two different data types in C. The float data type is used to store the single-precision floating-point values, and the double data type is used to store the double-precision floating-point values. The float data type is used to store the 32-bit floating-point values, and the double data type is used to store the 64-bit floating-point values. The float data type is used to store the 32-bit floating-point values, and the double data type is used to store the 64-bit floating-point values.
// int floatDoubleDifference()
// {
//     float a = 10.512345678;
//     double b = 10.5123456789023456789;
//     printf("Float value is %0.8f and Double value is %0.12lf", a, b);
//     return 0;
// }

// Output:
// Float value is 10.51234579 and Double value is 10.512345678902

// find the largest of three number using ternary operator
// whta is ternary operator in c
// ternary operator in c - is a conditional operator that takes three operands.
// It is also known as the conditional operator. It is used to evaluate a condition and
// return a value based on the result of the condition. It is also known as the conditional operator.
// It is used to evaluate a condition and return a value based on the result of the condition.
// Syntax: (condition) ? expression1 : expression2;

int largestOfThree()
{
    // int a = 10, b = 20, c = 30;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest number is %d", largest);
    return 0;
}

// descision making in c
// if else in c
// nested if else in c
// switch case in c
// loops in c
// for loop in c

// write code exapmles for all the above topics

int ifElse()
{
    int a = 11;
    if (a == 10) // if (a == 10) is a condition
    {
        printf("a is equal to 10"); // if the condition is true then this statement will be executed
    }
    else
    {
        printf("a is not equal to 10");
    }
    return 0;
}

int nestedIfElse()
{
    int a = 10;
    if (a == 10)
    {
        if (a > 5)
        {
            printf("a is greater than 5");
        }
        else
        {
            printf("a is not greater than 5");
        }
    }
    else
    {
        printf("a is not equal to 10");
    }
    return 0;
}

int switchStuff()
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 10:
        printf("a is equal to 10");
        break;
    case 20:
        printf("a is equal to 20");
        break;
    case 30:
        printf("a is equal to 30");
        break;
    default:
        printf("a is not equal to 10, 20 or 30");
        break;
    }
    return 0;
}

// write a program to find the largest of three number using if else and nested if else

int greatesetUsigIfElse()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    return 0;
}

int evenOrOdd()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("a is even");
    }
    else
    {
        printf("a is odd");
    }
    return 0;
}

int leapYear()
{
    int year;
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Leap year");
            }
            else
            {
                printf("Not a leap year");
            }
        }
        else
        {
            printf("Leap year");
        }
    }
    else
    {
        printf("Not a leap year");
    }
    return 0;
}

int main()
{
    // formatSpecifier();
    // floatDoubleDifference();
    // ifElse();
    // nestedIfElse();
    // switchStuff();
    // largestOfThree();
    greatesetUsigIfElse();

    return 0;
}

// if else syntax

// if (condition)
// { // if the condition is true then this block will be executed
//     // statements
// }
// else
// { // if the condition is false then this block will be executed
//     // statements
// }

// wap to show following condition using nested if else statement:
// for male:
// salary > 10000 then bonus should be 1000
// salary <= 10000 and salary => 5000 then bonus should be 500
// salary < 5000 then bonus should be 100

// for female:
// salary > 10000 then bonus should be 100
// salary <= 10000 and salary => 5000 then bonus should be 50
// salary < 5000 then bonus should be 10

int salaryStuff()
{
    int salary;
    printf("Enter your salary: ");
    scanf("%d", &salary);

    char g;
    printf("Enter your gender (m/f): ");
    scanf("%c", &g);

    if (g == 'm')
    {
        if (salary > 10000)
        {
            printf("Bonus is 1000");
        }
        else if (salary <= 10000 && salary >= 5000)
        {
            printf("Bonus is 500");
        }
        else
        {
            printf("Bonus is 100");
        }
    }

    else
    {
        if (salary > 10000)
        {
            printf("Bonus is 100");
        }
        else if (salary <= 10000 && salary >= 5000)
        {
            printf("Bonus is 50");
        }
        else
        {
            printf("Bonus is 10");
        }
    }
}
