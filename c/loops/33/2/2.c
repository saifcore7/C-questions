#include <stdio.h>
int main()
{
    int n = 4;
    int space = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf("* ");
        }
        for (int j = 2; j < space; j++)
        {
            printf("  ");
        }
        for (int j = 4; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
        space = space + 2;
    }

    int space2 = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 1; j <= space2; j++)
        {
            printf("  ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
        space2 = space2 - 2 ;
    }
}