#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("\nEnter a string : ");

    gets(str);

    char key;
    printf("\nEnter the character which you want to search : ");
    scanf("%c", &key);

    int found = 0;
    // binary search
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == key)
        {
            found = 1;
            printf("'%c' present in %d index", key, i);
        }
        i++;
    }

    if (found == 0)
    {
        printf("'%c' is not present in string.", key);
    }

    return 0;
}
/*OUTPUT :-

Enter a string : amit

Enter the character which you want to search : i
'i' present in 2 index*/