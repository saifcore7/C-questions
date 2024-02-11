/*
4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000*/
#include <stdio.h>
int main()
{
    int s = 0;
    float avg;
    int n;
    printf("Enter 10 nos from keyboard\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Element %d ",i);
        scanf("%d",&n);
        s = s+n;
    }
    avg = s/10.0;
    printf("Average and sum %d %f ", s,avg);
}