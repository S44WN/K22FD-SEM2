// // write all bitewise operators in C

#include <stdio.h>

// int bitwiseStuff(){
//     int a = 5;
//     int b = 6;
//     int c = 0;

//     c = a & b; // 0101 & 0110 = 0100
//     printf("a & b = %d \t", c);

//     c = a | b; // 0101 | 0110 = 0111
//     printf("a | b = %d \t", c);

//     c = a ^ b; //   0101 ^ 0110 = 0011
//     printf("a ^ b = %d \t", c);

//     c = ~a; // 0101 = 1010
//     printf("~a = %d \t", c);

//     c = a << 2; // 0101 << 2 = 010100
//     printf("a << 2 = %d \t", c);

//     c = a >> 2; // 0101 >> 2 = 0001
//     printf("a >> 2 = %d \t", c);

// };



//write a program using Ternary or Conditional Operators statement to check if a student is eligible for exam or not based on the following criteria: 
// 1. student should have attended 75% of the classes
// 2. student should have scored 40% in the CA exam


int eligibleForExam(){
    int attended, ca;
    printf("Enter the number of classes attended : ");
    scanf("%d", &attended);
    printf("Enter the CA score : ");
    scanf("%d", &ca);

    (attended >= 75 && ca >= 40) ? printf("Eligible for exam") : printf("Not eligible for exam");

}

//Question 5
// write a program to calculate the total bill of a student in a stationary shop. 
//The shop sells pens, books and notebooks. The prices of pens, books and notebooks are 10, 20 and 15 respectively. 
//If the total bill is greater than 1000, then 10% GST is added to the total bill.

int calculateBill(){
    // enter no of pens books and notebooks
    float pens, books, notebooks;
    printf("Enter the number of pens : ");
    scanf("%d", &pens);

    printf("Enter the number of books : ");
    scanf("%d", &books);

    printf("Enter the number of notebooks : ");
    scanf("%d", &notebooks);

    // calculate the total bill
    float totalBill = (pens*10) + (books*20) + (notebooks*15);

    // calculate the gst 10% if total bill is greater than 1000

    float gst = (totalBill > 1000) ? (totalBill*0.1) : 0;

    //update total bill
    totalBill += gst;

    // print the total bill
    printf("Total bill is : %f", totalBill);

}

// Question 6
// write a program to check of you passed ot failed in a subject based on the following criteria:
// 1. you should have scored 40% in the CA 1 exam
// 2. you should have scored 40% in the CA 2 exam
// 2. you should have scored 40% in the mid term exam
// 3. you should have scored 40% in the total of CA, mid term and final exam
// 4. you should have attended 75% of the classes

int passOrFail(){
    int ca1, ca2, mid, total, attended;
    printf("Enter the CA 1 score : ");
    scanf("%d", &ca1);

    printf("Enter the CA 2 score : ");
    scanf("%d", &ca2);

    printf("Enter the MTE score : ");
    scanf("%d", &mid);

    printf("Enter the ETE score : ");
    scanf("%d", &total);

    printf("Enter the number of classes attended : ");
    scanf("%d", &attended);

    (ca1 >= 40 && ca2 >= 40 && mid >= 40 && total >= 40 && attended >= 75) ? printf("Passed") : printf("Failed");


};



int main(){
    // bitwiseStuff();
    // eligibleForExam();
    calculateBill();
    return 0;
};

