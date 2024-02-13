/*
4. Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of elements to be stored in array : ");
    scanf("%d", &n);
    int a[100];
    int b[100];
    printf("Enter %d array elements \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &a[i]);
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}