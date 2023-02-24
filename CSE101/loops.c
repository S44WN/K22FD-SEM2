
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

// what is armstrong number
// 153 = 1^3 + 5^3 + 3^3

int armstrongNum()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + lastDigit * lastDigit * lastDigit;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("The number is armstrong");
    }
    else
    {
        printf("The number is not armstrong");
    }
}

// write a program to show to use of goto and continue statements
int continueStatement()
{
    int a = 1;
    while (a <= 10)
    {
        if (a == 5)
        {
            a++;
            continue;
        }
        printf("%d ", a);
        a++;
    }
}

int gotoStatemnt()
{
    int a = 1;
    while (a <= 10)
    {
        if (a == 5)
        {
            a++;
            goto end;
        }
        printf("%d ", a);
        a++;
    }
end:
    printf("End of the program");
}

// write a program to print the table of numbers in any range which is divisible by 5 and is odd

int customTable()
{
    int start, end;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
    {
        if (i % 5 == 0 && i % 2 != 0)
        {
            for (int j = 1; j <= 10; j++)
            {
                printf("%d * %d = %d \n", i, j, i * j);
            }
        }
    }
}

// lyrics of naked song by james arthur
// https://www.azlyrics.com/lyrics/jamesarthur/naked.html
// write a program to print the lyrics of the song
// naked by james arthur from a weblink using c

int printLyrics()
{
    char lyrics[1000];
    FILE *fptr;
    fptr = fopen("lyrics.txt", "r");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    while (fgets(lyrics, 1000, fptr) != NULL)
    {
        printf("%s", lyrics);
    }
    fclose(fptr);
}

// write a program to show odd even using goto

int oddEven()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
odd:
    printf("The number is odd");
even:
    printf("The number is even");
}

int starPattern()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf(" \n");
    }
}

// explicit type conversion
int fromTeacher()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d %d\n", x, y);
    printf("%i %i", x, y);
}

int fromteach2()
{
    int a = 54;
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
    armstrongNum();
    continueStatement();
    gotoStatemnt();
    customTable();
    printLyrics();
    oddEven();

    return 0;
}

// wap to get factorial

int facto()
{
}