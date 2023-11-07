#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter your name : ");
    gets(str);

    char bound;
    printf("Enter character : ");
    scanf("%c", &bound);

    int check = 0;
    int i = 1;
    while (str[i] != '\0')
    {
        if (str[i] == bound)
        {
            check = 1;
            printf("%d", i);
        }
        i++;
    }
    if (check == 0)
    {
        printf("Enter lower bound");
    }

    return 0;
}