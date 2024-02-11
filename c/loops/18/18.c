/*
Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
Test Data :
Input the Value of x :2
Input the number of terms : 5
Expected Output :
the sum = -0.415873
Number of terms = 5
value of x = 2.000000
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float x;
    printf("Enter the value of x : ");
    scanf("%f", &x);
    printf("\nEnter the no of terms : ");
    scanf("%d", &n);
    float sum = 1;
    int sign = -1;
    int fact;
    for (int i = 2; i <= 2 * (n - 1); i += 2)
    {
        fact = 1;

        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        sum = sum + ((pow(x, i)) / fact) * sign;
        sign = sign * -1;
    }
    printf("%f", sum);
}