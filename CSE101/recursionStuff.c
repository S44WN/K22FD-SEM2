// write a program to fibonacci series using recursion

#include <stdio.h>

// int fib(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     else
//     {
//         return fib(n - 1) + fib(n - 2);
//     }
// };

int sumOfEven(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a % 2 == 0)
    {
        return a + sumOfEven(a - 2);
    }
}

int main()
{
    // int n;
    // printf("Enter the number : ");
    // scanf("%d", &n);
    // printf("Fibonacci series of %d : ", n);
    // printf("%d ", fib(n));
    // return 0;

    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("Sum of even numbers : %d", sumOfEven(a));
    return 0;
}
