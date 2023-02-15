
// write code exapmles for all types of loops in c

// while loop
// do while loop
// for loop
// for each loop

#include <stdio.h>

int whileLoop()
{
    int a = 1;
    while (a <= 10)
    {
        printf("%d ", a);
    }
};

int doWhileLoop()
{
    int a = 1;
    do
    {
        printf("%d ", a);
        a++;
    } while (a <= 10);
};

int forLoop()
{
    for (int a = 1; a <= 10; a++)
    {
        printf("%d ", a);
    }
};

int forEachLoop()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
};

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int primeOrNot()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int flag = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}

int reverseNum()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int rev = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }
    printf("Reverse of the number is %d", rev);
}

int tableOfnum()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
}

int sumOfDigits()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    printf("Sum of the digits is %d", sum);
}

int palindromeNum()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int rev = 0;
    int temp = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }
    if (temp == rev)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
}

int main()
{
    // whileLoop();
    // doWhileLoop();
    // forLoop();
    // forEachLoop();
    printf("%d", factorial(5));
    primeOrNot();
    reverseNum();
    tableOfnum();
    sumOfDigits();
    palindromeNum();

    return 0;
}
