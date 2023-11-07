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

    int i = 0;
    bool check = false;
    while (str[i] != '\0')
    {
        if (str[i] == str2[i])
        {
            check = true;
        }
        i++;
    }
    if (check == true)
    {
        printf("Both string are same.");
    }
    else
    {
        printf("Both string are different.");
    }

    return 0;
}