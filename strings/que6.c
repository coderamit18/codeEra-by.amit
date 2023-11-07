#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter your name : ");
    gets(str);
    // puts(str);
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        // printf("%c", str[i]);
        i++;
        count++;
    }
    printf("%d",count);
    return 0;
}