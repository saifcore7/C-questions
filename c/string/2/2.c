/*length of string without library function*/
#include <stdio.h>
int main()
{
    char st[100];
    printf("Enter a string : ");
    scanf("%[^\n]", &st);

    int count = 0, i = 0;
    while (st[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d\n", count);
}