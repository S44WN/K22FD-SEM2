
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

int main()
{
    // whileLoop();
    // doWhileLoop();
    // forLoop();
    // forEachLoop();
    printf("%d", factorial(5));
    primeOrNot();
    return 0;
}
