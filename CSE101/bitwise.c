// // write all bitewise operators in C

// #include <stdio.h>

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

int main(){
    // bitwiseStuff();
    eligibleForExam();
    return 0;
};

