#include<stdio.h>
int main()
{
    int a = 10, b = 11, c = 5.5, d;
    b /= a;
    c += b;
    d = c + a;
    printf(" b = %d \n c = %d \n d = %d",b,c,d);
}
/*  b = 1 
 c = 6 
 d = 16*/