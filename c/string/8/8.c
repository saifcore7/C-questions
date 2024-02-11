/*
Write a program in C to copy one string to another string.

Test Data :
Input the string : This is a string to be copied.

Expected Output :

The First string is : This is a string to be copied.
The Second string is : This is a string to be copied.
Number of characters copied : 31*/
#include <stdio.h>
int main()
{
    char st1[100] = "Saif";
    char st2[100];
    char ch;
    int i;
    for (i = 0; st1[i] != '\0'; i++)
    {
        st2[i] = st1[i];
    }
    st2[i] = '\0';
    printf("%s", st1);
    printf("\n");
    printf("%s", st2);
}