#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter your name : ");
    gets(str);

    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}