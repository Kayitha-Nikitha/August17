//C program to check Most Significant Bit (MSB) of a number using bitwise operator
#include <stdio.h>
#define BITS sizeof(int) * 8 // Total bits required to represent integer

int main()
{
    int n, msb;

    //Reading input number from user
    printf("Enter any number: ");
    scanf("%d", &n);

    //Move first bit of 1 to highest order
    msb = 1 << (BITS - 1);

    //Perform bitwise AND with msb and n
    if(n & msb)
        printf("MSB of %d is set (1).", n);
    else
        printf("MSB of %d is unset (0).", n);

    return 0;
}
