#include <stdio.h>
#include <string.h>
int main()
{

    char str[20];
    puts("Enter your name : ");
    gets(str);
    char str2[20];
    int i = 0;
    while (str[i] != '\0')
    {
        str2[i] = str[i];
        i++;
    }
    str2[i] = '\0';
    printf("String copied : %s", str2);
    return 0;
}