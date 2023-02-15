
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

int main()
{
    whileLoop();
    doWhileLoop();
    forLoop();
    forEachLoop();
    return 0;
}
