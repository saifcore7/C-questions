/*
Write a program in C to count the total number of words in a string.

Test Data :
Input the string : This is w3resource.com

Expected Output :

Total number of words in the string is : 3
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char st[100];
    printf("Enter a string : ");
    scanf("%[^\n]", st);
    int size = strlen(st);
    int l = 1;
    for (int i = 0; st[i] != '\0'; i++)
    {
        if (st[i] == ' ' || st[i] == '\n' || st[i] == '\t')
        {
            l++;
        }
    }
    if (st[0] == ' ' || st[size - 1] == ' ') printf("You cannot add space at the starting or ending of a sentence. According to punctuation and styling rules.");
        
    else printf("%d", l);
}