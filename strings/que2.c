#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter your name : ");
    gets(str);

    int lenght = strlen(str);
    for (int i = 0; i <= lenght; i++)
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }

    printf("String in uppercase : %s",str);
    return 0;
}