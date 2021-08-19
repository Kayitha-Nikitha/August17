//C Program to Swap two Numbers using Bitwise operators

#include <stdio.h>
#include <string.h>

//Function Prototype
void swap(int*, int *);

void main()
{
    int num1, num2;
    printf("\nEnter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("\nThe numbers before swapping are Number1= %d Number2 = %d", num1, num2);
    swap(&num1, &num2);        //Call by Reference to function swap
    printf("\nThe numbers after swapping are Number1= %d Number2 = %d", num1, num2);
}

//Code to swap two numbers using bitwise operator
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

/**
i = 18; binary equivalent of 18 is 10010
k = 22; binary equivalent of 22 is 10110

i = i^k;
i...00100

k...10110

---------
val of i = 00100
---------
k = i^k

i...00100

k...10110

---------
val of k = 10010 binary equivalent of this is 18
---------

(that is the initial value of i)

i = i^k

i...00100

k...10010

---------
val of i = 10110 binary equivalent of this is 22
---------

(that is the initial value of k)
*/
