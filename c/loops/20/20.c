/*
Write a C program to display the pattern as a pyramid using asterisks, with each row containing an odd number of asterisks.

   *
  ***
 *****
 */

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int space = 0; space <= 3 - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}