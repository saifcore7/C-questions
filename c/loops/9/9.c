/*
9. Write a program in C to display a pattern like a right angle triangle using an asterisk.

The pattern like :

*
**
***
*****/

#include <stdio.h>
int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}