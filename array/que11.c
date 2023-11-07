#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int arr[n];
    
    // Taking inputs
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element :", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("The similar elements in array :%d\n", arr[j]);
            }
        }
    }

    return 0;
}