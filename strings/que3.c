#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter sentance : ");
    gets(str);

    int lenth = strlen(str);

    for (int i = 0; i < lenth; i++)
    {
        if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] == '.')
        {
            if (str[i+1] == " ")
            {
                str[i + 2] = str[i + 2] - 32;
            }
            else
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
    }
    printf("Sentance case : %s", str);
    return 0;
}