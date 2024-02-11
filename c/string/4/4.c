/*
Write a program in C to print individual characters of a string in reverse order.

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string in reverse are :
m  o  c  .  e  c  r  u  o  s  e  r  3  w
*/
#include <stdio.h>
int main()
{
    char st[100];
    printf("Enter a string : ");
    scanf("%[^\n]", &st);

    int l = 0;

    for (int i = 0; st[i] != '\0'; i++)
    {
        l++;
    }
    char ch;
    for (int i = l - 1; i >= 0; i--)
    {
        ch = st[i];
        printf("%c ", ch);
    }
}