#include <stdio.h>

int cubevol()
{
    int side;

    printf("Enter a side of the cube : ");
    scanf('%d', &side);

    printf("Volume of the cube with %d is %d", side, (side * side * side));
}

// program to sum two numbers
int sumtwonum()
{
    int x, y, sum = 0;
    printf('Enter two numbers : ');
    scanf('%d %d', &x, &y);

    printf("sum of them is : %d", sum = x + y);
}

// program to

int main()
{
    cubevol();
    sumtwonum();
    return 0;
}