#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter the number of element : ");
    scanf("%d", &n);
    int arr[n], brr[n];

    // taking input
    printf("\nEnter first array - \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter second array - \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &brr[i]);
    }

    // check of array
    bool check;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == brr[j])
            {
                check = true;
            }
            else
            {
                check = false;
            }
        }
    }
    if (check == true)
    {
        printf("\nBoth array are same");
    }
    else
    {
        printf("\nBoth array are different");
    }

    return 0;
}
// OUTPUT
/*

Enter the number of element : 4

Enter first array -
Enter the 1 element : 1
Enter the 2 element : 2
Enter the 3 element : 3
Enter the 4 element : 4

Enter second array -
Enter the 1 element : 6
Enter the 2 element : 7
Enter the 3 element : 8
Enter the 4 element : 9

Both array are different
*/