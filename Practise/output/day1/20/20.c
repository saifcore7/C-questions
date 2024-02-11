#include <stdio.h>
int main()
{
    float a = 10.0;
    a = a % 3;
    printf("%f", a);
}
//error: invalid operands to binary % (have 'float' and 'int')