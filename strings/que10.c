#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter your name : ");
    gets(str);

    int bound;
    printf("Enter bound number : ");
    scanf("%d", &bound);

    int check = 0;
    int i = 1;
    while (str[i] != '\0')
    {
        if (i == bound-1)
        {
            check = 1;
            printf("%c", str[i]);
        }
        i++;
    }
    if (check == 0)
    {
        printf("Enter lower bound");
    }

    return 0;
}