// write all bitewise operators in C

#include <stdio.h>

int main(){
    int a = 5;
    int b = 6;
    int c = 0;

    c = a & b; // 0101 & 0110 = 0100
    printf("a & b = %d \t", c);

    c = a | b; // 0101 | 0110 = 0111
    printf("a | b = %d \t", c);

    c = a ^ b; //   0101 ^ 0110 = 0011
    printf("a ^ b = %d \t", c);

    c = ~a; // 0101 = 1010
    printf("~a = %d \t", c);

    c = a << 2; // 0101 << 2 = 010100
    printf("a << 2 = %d \t", c);

    c = a >> 2; // 0101 >> 2 = 0001
    printf("a >> 2 = %d \t", c);

    return 0;
}

