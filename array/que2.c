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
    printf("Your array : ");
    // display all values
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nReversed array : ");
    // display all values
    for (int i = n-1; i > -1; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
// OUTPUT
/*

Enter the number of element : 5
Enter the 1 element : 1    
Enter the 2 element : 3
Enter the 3 element : 4
Enter the 4 element : 5
Enter the 5 element : 6
Your array : 1  3       4       5       6
Reversed array : 6      5       4       3       1
*/