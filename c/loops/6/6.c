/*
Write a program in C to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150*/

#include <stdio.h>
int main()
{
  int n;
  int table;
  printf("Inout the number (Table to be calculated) : ");
  scanf("%d",&n);

  for(int i = 1; i <= 10; i++)
  {
    table = n * i;
    printf("%d x %d : %d \n",n,i,table);
  }
}