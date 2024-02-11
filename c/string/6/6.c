/*
Write a program in C to compare two strings without using string library functions.

Test Data :
Check the length of two strings:
--------------------------------
Input the 1st string : aabbcc
Input the 2nd string : abcdef
String1: aabbcc
String2: abcdef
Expected Output : Strings are not equal.

Check the length of two strings:
--------------------------------
Input the 1st string : aabbcc
Input the 2nd string : aabbcc
String1: aabbcc
String2: aabbcc
Expected Output : Strings are equal
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char st1[100];
    printf("Enter first string : ");
    scanf("%s", &st1);
    char st2[100];
    printf("\n Enter seconf string : ");
    scanf("%s", &st2);
    int s1 = strlen(st1);
    int s2 = strlen(st2);
    if (s1 == s2)
    {
        int equal = 1;
        for (int i = 0; st1[i] != '\0'; i++)
        {
            st1[i] = tolower(st1[i]);
            st2[i] = tolower(st2[i]);
            if (st1[i] != st2[i])
            {
                equal = 0;
                break;
            }
        }
        if (equal)
            printf("equal");
        else
            printf("not equal");
    }
    else
    {
        printf("string are not equal");
    }
}