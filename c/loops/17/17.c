/*
Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

   1
  2 2
 3 3 3
4 4 4 4
*/
#include <stdio.h>
int main()
{   int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space <= n - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}