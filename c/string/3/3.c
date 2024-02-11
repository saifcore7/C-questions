/*
Input the string : w3resource.com

Expected Output :

The characters of the string are :
w  3  r  e  s  o  u  r  c  e  .  c  o  m
*/
#include <stdio.h>
int main()
{
    char st[100];
    printf("Enter a string : ");
    scanf("%[^\n]", st);
    char ch;
    for (int i = 0; st[i] != '\0'; i++)
    {
        ch = st[i];
        printf("%c\n", ch);
    }
}