/*
print string
*/
#include <stdio.h>
int main()
{
    char st[100];
    printf("Enter a string : ");
    scanf(" %[^\n]", &st);
    printf("%s", st);
}