#include <stdio.h>
int maxofarr(int arr[], int idx, int lenght)
{

    if (idx == lenght - 1)
    {
        return arr[idx];
    }
    int max = maxofarr(arr, idx + 1, lenght);
    if (max > arr[idx])
    {
        return max;
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

    printf("Largest value in given array is %d", maxofarr(arr, 0, m));
    return 0;
}
// OUTPUT
/*

Enter the size of array : 5
Enter 1 value : 23
Enter 2 value : 45
Enter 3 value : 22
Enter 4 value : 1
Enter 5 value : 233
Largest value in given array is 233
*/