/*
25. Write a C program that displays the n terms of square natural numbers and their sum.
1 4 9 16 ... n Terms
Test Data :
Input the number of terms : 5
Expected Output :
The square natural upto 5 terms are :1 4 9 16 25
The Sum of Square Natural Number upto 5 terms = 55
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 5;
    int square;
    int s = 0;
    printf("Square of n natural nos : ");
    for (int i = 1; i <= n; i++)
    {
        square = pow(i, 2);
        printf("%d ", square);
        s = s + square;
    }
    printf("\n%d", s);
}