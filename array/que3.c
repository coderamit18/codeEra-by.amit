#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of element : ");
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    // taking input
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Copied Array : ");
    // display all values
    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr2[i]);
    }

    return 0;
}
// OUTPUT
/*

Enter the number of element : 4
Enter the 1 element : 1
Enter the 2 element : 2
Enter the 3 element : 3
Enter the 4 element : 4
Copied Array : 1        2       3       4
*/