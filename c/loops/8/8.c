/*
Write a C program to display the n terms of odd natural numbers and their sum.
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n natural numbers digit\n");
    scanf("%d", &n);
    int s = 0;

    for (int i = 1; i <= n; i++)
    {
        
            printf("Odd number %d : ", 2 * i - 1);
            s = s + 2 * i - 1;
        
    }
    printf("\nSum of odd numbers %d",s);
}