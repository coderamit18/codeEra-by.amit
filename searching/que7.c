#include <stdio.h>
#include <stdbool.h>
bool binarySearch(int arr[], int start, int end, int element)
{
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    // printf("mid %d\t",arr[mid]);
    if (arr[mid] == element)
    {
        return true;
    }

    if (arr[mid] < element)
    {
        bool ans = binarySearch(arr, mid + 1, end, element);
    }
    else
    {
        bool ans = binarySearch(arr, 0, mid - 1, element);
    }
}
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int element;
    printf("\nEnter the number which you want to find : ");
    scanf("%d", &element);

    bool ans = binarySearch(arr, 0, size - 1, element);

    if (ans)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}
// OUTPUT : 
/*

Enter the size of array : 5
Enter 1 element : 12
Enter 2 element : 34
Enter 3 element : 45 
Enter 4 element : 56
Enter 5 element : 67

Enter the number which you want to find : 67
Element found
*/