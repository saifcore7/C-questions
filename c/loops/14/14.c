/*
Write a C program to make such a pattern as a pyramid with an asterisk.

   *
  * *
 * * *
* * * * */

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int space = 0; space < 4 - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}