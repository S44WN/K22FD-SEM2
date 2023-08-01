// write a program to enter 5 subject marks using structure of n number of students and find average of individual students

#include <stdio.h>

struct student
{
    int marks[5];
    float avg;
};

int avgmarks(void)
{
    struct student s[5];
    int i, j;
    float sum;
    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 5; j++)
        {
            printf("Enter marks of student %d in subject %d: ", i + 1, j + 1);
            scanf("%d", &s[i].marks[j]);
            sum += s[i].marks[j];
        }
        s[i].avg = sum / 5;
    }
    for (i = 0; i < 5; i++)
    {
        printf("Average marks of student %d is: %f\n", i + 1, s[i].avg);
    }
    return 0;
}

struct ABC
{
    int a, b;
} s1, s2;

void ABCfunc()
{
    int i = 0;

    printf("\n%d Value : ", i + 1);
    scanf("%d %d", &s1.a, &s1.b);
    printf("a = %d, b = %d", s1.a, s1.b);
    printf("\n%d Value : ", i + 2);
    scanf("%d %d", &s2.a, &s2.b);
    printf("a = %d, b = %d", s2.a, s2.b);
    printf("\na = ", s1.a);
}

int main()
{
    avgmarks();
    ABCfunc();
    return 0;
}


    // can i put balls in yo jaws?? - 