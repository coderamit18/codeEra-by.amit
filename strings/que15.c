#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter your name : ");
    gets(str);

    char character;
    printf("Enter character which you want to find : ");
    scanf("%c", &character);

    int check = 0;
    int i = 1;
    while (str[i] != '\0')
    {
        if (str[i] == character)
        {
            check = 1;
            printf("%c is present in %d index", str[i], i + 1);
        }
        i++;
    }
    if (check == 0)
    {
        printf("Character not present in string.");
    }

    return 0;
}