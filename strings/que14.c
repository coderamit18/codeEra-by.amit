#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    printf("Enter first string : ");
    char str[20];
    gets(str);

    printf("Enter second string : ");
    char str2[20];
    gets(str2);

    int size = sizeof(str);
    int size2 = sizeof(str2);

    int i = 0;
    while (str[i] != '\0')
    {
        printf("%d  ", str[i] - str2[i]);
        i++;
    }

    return 0;
}