/*
1. Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/
#include <stdio.h>
int main()
{
    int a[10];
    printf("Enter array elements \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &a[i]);
    }
    printf("Array elements are : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
}