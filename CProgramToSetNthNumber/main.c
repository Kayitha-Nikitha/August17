//C program to set the nth bit of a number

#include <stdio.h>

int main()
{
    int num, n, newNum;

    //Reading input number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    //Input bit position to set
    printf("Enter nth bit to set (0-31): ");
    scanf("%d", &n);

    //Left shift 1, n times and perform bitwise OR with num
    newNum = (1 << n) | num;

    printf("Bit set successfully.\n\n");
    printf("Number before and after setting %d bit: %d and %d (in decimal)\n", n, num, newNum);
    return 0;
}
