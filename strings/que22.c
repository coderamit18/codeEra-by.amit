#include <stdio.h>

int main()
{
    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("(%c,%c)\t", str[i],str[j]);
        }
        printf("\n");
    }

    return 0;
}