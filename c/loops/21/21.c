/*
Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
Test Data :
Input the number or terms :5
Expected Output :
9 99 999 9999 99999
The sum of the saries = 111105
*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter value of n : ");
    scanf("%d", &n);
    int t = 1;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + t;
        t = t * 10 + 1;
    }
    printf("%d", sum);
}