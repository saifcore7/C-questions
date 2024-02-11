/*
1 2 3 4 5 
1 1 2 3 4
1 1 1 2 3
1 1 1 1 2
1 1 1 1 1
*/
#include <stdio.h>
int main()
{
    for(int i = 1; i<=5;i++)
    {
        for(int k = 1; k <=i; k++)
        {
            printf("1 ");
        }
        for(int j = 2; j<=6-i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}