/*
Write a C program to check whether a given number is a 'Perfect' number or not.
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect
*/
#include <stdio.h>
int main()
{
    int n = 28;
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            s = s + i;
        }
    }
    (s == n) ? printf("\nPerfect") : printf("\nNot perfect");
}
