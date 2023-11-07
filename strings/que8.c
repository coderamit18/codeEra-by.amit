#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    printf("Enter first string : ");
    char str[20];
    gets(str);

    printf("Enter second string : ");
    char str2[20];
    gets(str2);
    
    printf("\nConcatenate of two string : ");
    printf("%s %s", str, str2);

    return 0;
}