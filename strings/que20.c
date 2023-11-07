#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number string to be sorted : ");
    scanf("%d", &n);

    char str[20][20], temp[20];
    printf("Enter string to be sorted\n");
    for (int i = 0; i <= n; i++)
    {
        gets(str[i]);
    }
    for (int i = 0; i <=n; i++)
    {
        for (int j = i+1; j <=n; j++)
        {
            if (strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }   
        }
    }
    printf("String after sorted : \n");
    for (int i = 0; i <=n; i++)
    {
        puts(str[i]);
    }
    
    return 0;
}