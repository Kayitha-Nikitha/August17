//C program to toggle nth bit of a number

#include <stdio.h>

int main()
{
    int num, n, newNum;

    //Reading Input number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    //Input bit position to toggle
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &n);

    /*
     * Left shifts 1, n times
     * then perform bitwise XOR with num
     */
    newNum = num ^ (1 << n);
    printf("Bit toggled successfully.\n\n");
    printf("Number before and after toggling %d bit: %d and %d (in decimal)\n", n, num, newNum);
    return 0;
}
/** num= 16, n= 1
    Binary(16)= 1 0 0 0 0
    newNum= num ^ (1 << n)
          = num ^ (1 << 1)
          = num ^  1 0
          = 1 0 0 0 0 ^ 1 0
          = 1 0 0 1 0
          =18
*/
