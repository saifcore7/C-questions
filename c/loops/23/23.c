/*
Calculate the sum of the series [ 1+x+x^2/2!+x^3/3!+....]
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 5;
    float sum = 1.0; // Start with the first term
    float t;
    float x = 3.0; // Use float for x to include decimal values
    int fact;

    for (int i = 1; i < n; i++)
    {
        fact = 1;

        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }

        t = pow(x, i) / fact;
        printf("\n%f", t);
        sum = sum + t;
    }
    printf("\n%f", sum);

    return 0;
}
