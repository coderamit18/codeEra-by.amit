#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("check the string is palindrome or not : \n");
    gets(a);
    int check = 1;
    int i = 0;
    int j = strlen(a) - 1;
    // printf("%d", j);
    while (i <= j)
    {
        if (a[i] == a[j])
        {
            check = 1;
            i++;
            j--;
        }

        else if (a[i] != a[j])
        {
            check = 0;
            break;
        }
    }

    if (check == 1)
    {
        printf("'%s' is palindrome", a);
    }
    else
    {
        printf("'%s' is not a palindrome", a);
    }

    return 0;
}