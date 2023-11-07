#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("Enter the number of element : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    //insertion sort

    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int idx = -1;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }

    printf("\nSorted Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
//OUTPUT:-
/*

Enter the number of element : 6
Enter the 1 element : 43
Enter the 2 element : 11
Enter the 3 element : 22
Enter the 4 element : 34
Enter the 5 element : 1
Enter the 6 element : 23

Sorted Array :
1       11      22      23      34      43
*/