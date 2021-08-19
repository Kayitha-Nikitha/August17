#include <stdio.h>

int main()
{
    int n;

    /* Reading input number from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    /* If (n & 1) evaluates to 1 */
    if(n & 1)
        printf("LSB of %d is set (1).", n);
    else
        printf("LSB of %d is unset (0).", n);

    return 0;
}
