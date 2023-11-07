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

    // selection sort
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while ((j >= 1) && (arr[j] < arr[j - 1]))
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    printf("\nArray Sorted : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

// OUTPUT
/*

Enter the number of element : 6
Enter the 1 element : 43
Enter the 2 element : 21
Enter the 3 element : 1
Enter the 4 element : 24
Enter the 5 element : 55
Enter the 6 element : 45

Array Sorted :
1       21      24      43      45      55
*/