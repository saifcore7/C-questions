/*Write a program in C to find the sum of the series [ x - x^3 + x^5 - x^7 + x^9 - ......].
Test Data :
Input the value of x :2
Input number of terms : 5
Expected Output :
The values of the series:
2
-8
32
-128
512
The sum = 410
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 7;
    int x = 2;
    int power;
    int sign = 1;
    int f;
    int s = 0;
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        power = pow(x, i);
        f = sign * power;
        s = s + f;
        printf("%d ",f);
        sign = sign * -1;
    }
    printf("\n%d",s);
}