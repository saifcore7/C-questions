/*
Write a C program to display the sum of n terms of even natural numbers.
Test Data :
Input number of terms : 5
Expected Output :
The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30
*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the no : ");
    scanf("%d", &n);
    
    printf("The even no are : ");
    
    int s = 0; 

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i);
        s = s + 2 * i;
    }
    printf("\nSum of the even no : %d",s);
}