/*
1         1
1 2     2 1
1 2 3 3 2 1
*/
#include <stdio.h>
int main()
{
    int n = 4;
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        space = space - 2;
    }
}