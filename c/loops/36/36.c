/*

  1
 121
12321
*/
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int space = 3-i; space >= 1; space--)
        {
            printf("*");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}