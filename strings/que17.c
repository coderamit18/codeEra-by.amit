#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter your name : ");
    gets(str);
    int check = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            check++;
        }
        else if (str[i] == 'e')
        {
            check++;
        }
        else if (str[i] == 'i')
        {
            check++;
        }
        else if (str[i] == 'o')
        {
            check++;
        }
        else if (str[i] == 'u')
        {
            check++;
        }

        i++;
    }
    if (check == 0)
    {
        printf("Character not present in string.");
    }
    else
    {
        printf("Number of vowel present in string : %d", check);
    }

    return 0;
}