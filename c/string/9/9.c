/*
Write a program in C to count the total number of vowels or consonants in a string.

Test Data :
Input the string : Welcome to w3resource.com

Expected Output :

The total number of vowel in the string is : 9
The total number of consonant in the string is : 12
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    char vowels[] = "AEIOUaeiou";
    int vowel = 0, consonants = 0, space = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            space++;
        }

        for (int j = 0; vowels[j] != '\0'; j++)
        {
            if (vowels[j] == str[i])
            {
                vowel++;
            }
        }
    }
    consonants = strlen(str) - (vowel + space);
    printf("Vowels : %d\n", vowel);
    printf("Consonants : %d", consonants);
}