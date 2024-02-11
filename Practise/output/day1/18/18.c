#include <stdio.h>
int main()
{
    signed int a = 0;
    a = 14 % -5 -2;
    printf("%d",a);
}
//2 as operator precedence of % is more than binary minus