/*
3. Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of elements to be stored in array : ");
    scanf("%d", &n);
    int a[100];
    printf("Enter %d array elements \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &a[i]);
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    printf("Sum of array elements : %d", s);
}