#include <stdio.h>

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

    for (int i = 0; i < n; i++) // 1 2 4 5 5
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = 0;
            }
        }
    }

    printf("\nYour array is : ");
    // display all values
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
// OUTPUT
/*

Enter the number of element : 5
Enter the 1 element : 43
Enter the 2 element : 23
Enter the 3 element : 12
Enter the 4 element : 34
Enter the 5 element : 22

Your array is : 43      23      12      34      22
*/