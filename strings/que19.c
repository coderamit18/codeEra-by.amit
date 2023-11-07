// #include <stdio.h>
// int strTofloat(char str[])
// {
//     int i = 0, sum = 0;
//     while (str[i] != '\0')
//     {
//         if (str[i] == 46 || (str[i] >= 48) || (str[i] <= 57))
//         {
//             if (str[i] == 46)
//             {
//                 printf("%c", str[i]);
//             }
//             sum = sum * 10 + (str[i] - 48);
//         }

//         else
//         {
//             printf("\n'%c' Unable to convert\n", str[i]);
//         }

//         i++;
//     }
//     return sum;
// }
// int main()
// {
//     printf("Enter a string in integer form : ");
//     char str[20];
//     gets(str);

//     printf("Converted into integer : %d\n", strTofloat(str));
//     return 0;
// }

#include <stdio.h>

int main()
{
    char inputstr[] = "123.45";
    float result = 0.0F;
    float temp;
    int ndecimaldigit, i;

    ndecimaldigit = 1;
    for (i = 0; i <= 4; i++)
    {
        temp = inputstr[i] - '0';
        ndecimaldigit *= 10;
        temp /= ndecimaldigit;
        result += temp;
    }

    printf("%f %f %d \n", result, temp, ndecimaldigit);

return 0;
}