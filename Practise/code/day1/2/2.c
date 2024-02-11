/*
*****
 ***
  *
*/
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int space = 1; space <= i; space++)
        {
            printf(" ");
        }
        for (int j = 2 * i - 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}