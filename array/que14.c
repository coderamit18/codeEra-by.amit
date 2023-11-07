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
        for (int j = 0; j < n; j++)
        {
            printf("(%d,%d) ", arr[i], arr[j]);
        }
    }

    return 0;
}
// OUTPUT :
/*

Enter the number of element : 5
Enter the 1 element : 43
Enter the 2 element : 34
Enter the 3 element : 23
Enter the 4 element : 12
Enter the 5 element : 44
(43,43) (43,34) (43,23) (43,12) (43,44) (34,43) (34,34) (34,23) (34,12) (34,44) (23,43) (23,34) (23,23) (23,12) (23,44) (12,43) (12,34) (12,23) (12,12) (12,44) (44,43) (44,34) (44,23) (44,12) (44,44)
*/