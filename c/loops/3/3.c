/*
3. Write a program in C to display n terms of natural numbers and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter you desired n number");
    scanf("%d", &n);
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf("%d",s);
}