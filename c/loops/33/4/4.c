#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space >= 1; space--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++)
    {

        for (int space = 1; space <= i-1; space++)
        {
            printf(" ");
        }
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}