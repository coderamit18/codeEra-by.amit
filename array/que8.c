#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the number of element : ");
    scanf("%d", &n);
    int arr[n];

    // taking input
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Your array is :\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    // minimum number in your array
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    // Maximum number in your array
    int min = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("\nMaximum number is: %d \nMinimum number is: %d", max, min);

    return 0;
}
//OUTPUT
/*

Enter the number of element : 4
Enter the 1 element : 1
Enter the 2 element : 2
Enter the 3 element : 3
Enter the 4 element : 3
Your array is : 1       2       3       3
Maximum number is: 3
Minimum number is: 1
*/