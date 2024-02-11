/*
Write a program in C to count the total number of alphabets, digits and special characters in a string.

Test Data :
Input the string : Welcome to w3resource.com

Expected Output :

Number of Alphabets in the string is : 21
Number of Digits in the string is : 1
Number of Special characters in the string is : 4 */

#include <stdio.h>
#include <string.h>
int main()
{
    char st1[100];
    printf("Enter a string : ");
    gets(st1);
    char ch;
    int alphabets = 0;
    int digits = 0;
    int specialCharacters = 0;
    int a = strlen(st1);
    for (int i = 0; st1[i] != '\0'; i++)
    {
        if (st1[i] >= 'A' && st1[i] <= 'Z' || st1[i] >= 'a' && st1[i] <= 'z')
        {
            alphabets++;
        }
        else if (st1[i] >= '0' && st1[i] <= '9')
        {
            digits++;
        }
        else
        {
            specialCharacters++;
        }
    }
    printf("%d \n %d \n %d \n", alphabets, digits, specialCharacters);
    printf("%d", a);
}