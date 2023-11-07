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

    int key;
    printf("\nEnter the number which you want to find : ");
    scanf("%d", &key);

    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int idx;

    for (int i = 0; i < n; i++)
    {

        if (key == arr[i])
        {
            idx=i;
        }
        if (arr[i] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start+end)/2;
    }

    printf("%d is present in %d index",key,idx);

    return 0;
}
// OUTPUT : 
/*

Enter the number of element : 5
Enter the 1 element : 12
Enter the 2 element : 34
Enter the 3 element : 45 
Enter the 4 element : 56
Enter the 5 element : 78

Enter the number which you want to find : 12
12 is present in 0 index
*/