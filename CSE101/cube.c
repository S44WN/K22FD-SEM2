#include <stdio.h>

int main(){
    int side;

    printf("Enter a side of the cube : ");
    scanf('%d', &side);

    printf("Volume of the cube with %d is %d", side , (side*side*side));

    return 0;
}