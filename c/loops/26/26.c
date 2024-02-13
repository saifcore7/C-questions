/*
Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Test Data :
Input the number of terms : 5
Expected Output :
1 + 11 + 111 + 1111 + 11111
The Sum is : 12345
*/
#include <stdio.h>
int main()
{
    int n = 5;
    int t = 1;
    int s = 0;
    int m = 0;
    for(int i = 1; i <= n; i++)
    {
       s = s + t;
       t = t * 10;
       m = m + s;
       printf("%d ",s);
    }
    printf("\n%d",m);
}
