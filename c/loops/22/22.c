/*
Write a program in C to print Floyd's Triangle.

1
01
101
0101
10101
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int p, q;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 == 0)
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }
            else if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    printf("1 ");
                }
                else
                {
                    printf("0 ");
                }
            }
        }
        printf("\n");
    }
}