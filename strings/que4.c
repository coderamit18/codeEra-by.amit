#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter your name : ");
    gets(str);

    int lenght = strlen(str);
    for (int i = 0; i <= lenght; i++)
    {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[0] = str[0] - 32;
        }
        if (str[i] == '.')
        {
            if (str[i + 1] == ' ')
            {

                str[i + 2] = str[i + 2] - 32;
            }
            else
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        if (str[i] == ' ')
        {
            str[i + 1] = str[i + 1] - 32;
        }
    }

    printf("String in uppercase : %s", str);
    return 0;
}