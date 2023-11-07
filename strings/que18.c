#include <stdio.h>
int strToInt(char str[])
{
    int i = 0, sum = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < 48) || (str[i] > 57))
        {
            printf("\n'%c' Unable to convert\n", str[i]);
        }
        else
        {
            sum = sum * 10 + (str[i] - 48);
        }
        i++;
    }
    return sum;
}
int main()
{
    printf("Enter a string in integer form : ");
    char str[20];
    gets(str);

    printf("Converted into integer : %d\n",strToInt(str));
    return 0;
}