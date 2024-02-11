/*
Write a C program to display Pascal's triangle.
 Test Data :
Input number of rows: 5
Expected Output :

        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/

#include <stdio.h>
int main()
{
    int c = 1;
    for (int i = 0; i <= 4; i++)
    {
        for (int space = 0; space <= 5 - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (i - j + 1) / j;
            }
            printf("% 3d", c);
        }
        printf("\n");
    }
}