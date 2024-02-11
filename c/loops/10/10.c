/*10. Write a C program to display a pattern like a right angle triangle with a number.

The pattern like :

1
12
123
1234*/

#include <stdio.h>
int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < i + 1; j++)

        {
            printf("%d",j);
        }
        printf("\n");
    }
}