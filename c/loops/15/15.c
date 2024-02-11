/*
Write a C program to calculate the factorial of a given number.
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120*/

#include <stdio.h>
int main()
{
    int n;
    printf("Input the number for factorial : ");
    scanf("%d", &n);
    int f = 1;

    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    printf("%d", f);
}