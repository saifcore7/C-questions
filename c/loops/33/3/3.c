#include <stdio.h>
int main()
{
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {

                printf("4 ");
            }
            else if (i == 1 || j == 1 || i == n - 2 || j == n - 2)
            {

                printf("3 ");
            }
            else if (i == 2 || j == 2 || i == n - 3 || j == n - 3)
            {

                printf("2 ");
            }
            else
                printf("1 ");
        }
        printf("\n");
    }
}