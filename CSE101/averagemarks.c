// // write a program to calculate the average marks of 5 studentsentered by the user

// #include <stdio.h> // include stdio.h library to use printf and scanf functions

// int main(void) // main function
// {
//     int marks[5]; // array of 5 integers
//     int i; // loop counter
//     float sum = 0; // sum of marks
//     float avg; // average marks
//     for (i = 0; i < 5; i++) // loop 5 times
//     {
//         printf("Enter marks of student %d: ", i + 1); // i + 1 is the student number
//         scanf("%d", &marks[i]); // read marks of student i
//         sum += marks[i];  // add marks[i] to sum
//     }
//     avg = sum / 5; // calculate average
//     printf("Average marks of 5 students is: %f", avg); // print average
//     return 0; // return 0 to indicate success
// }

// write a program to enter 4 digit number and find sum of digits without using loops

#include <stdio.h> 

int main(void)
{
    int num; // number entered by user
    int sum; // sum of digits
    printf("Enter a 4 digit number: ");
    scanf("%d", &num); // read number
    sum = num % 10; // add last digit to sum
    num = num / 10; // remove last digit from num
    sum = sum + num % 10; // add second last digit to sum
    num = num / 10; // remove second last digit from num
    sum = sum + num % 10; // add third last digit to sum
    num = num / 10; // remove third last digit from num
    sum = sum + num % 10; // add fourth last digit to sum
    printf("Sum of digits is: %d", sum); // print sum
    return 0; // return 0 to indicate success
}



