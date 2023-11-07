#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a sentance : ");
    gets(str);

    int lenght = strlen(str);
    int character=lenght;
    int space=0;
    int word = 0;
    int line = 1;
    for (int i = 0; i < lenght; i++)
    {
        if (str[i] == 32)
        {
            space++;
            word++;
        }
        if (str[i]==32)
        {
            character--;
        }
        if (str[i]=='.')
        {
            line++;
        }
    }

    printf("Total Characters : %d\nTotal Words : %d\nTotal space : %d\nTotal line : %d\n", character, word+1,space,line);
    return 0;
}