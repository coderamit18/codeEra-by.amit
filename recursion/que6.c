#include <stdio.h>
int min(int arr[], int idx, int lenght)
{
    if (idx == lenght - 1)
    {
        return arr[idx];
    }
    int mini = min(arr, idx + 1, lenght);
    if (mini < arr[idx])
    {
        return mini;
    }
    else
    {
        return arr[idx];
    }
}
int main()
{
    printf("Enter the size of array : ");
    int m;
    scanf("%d", &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        printf("Enter %d value : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Smallest value in given array is %d", min(arr, 0, m));
    return 0;
}
// OUTPUT
/*

Enter the size of array : 5
Enter 1 value : 23
Enter 2 value : 43
Enter 3 value : 545
Enter 4 value : 1
Enter 5 value : 233
Smallest value in given array is 1
*/