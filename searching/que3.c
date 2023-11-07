#include <stdio.h>
#include <stdbool.h>

bool linearSearch(int arr[], int size, int element)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == element)
    {
        return true;
    }
    else
    {
        bool remainPart = linearSearch(arr + 1, size - 1, element);
        return remainPart;
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

    bool ans = linearSearch(arr, size, element);

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
// OUTPUT
/*

Enter the size of array : 6
Enter 1 element : 12
Enter 2 element : 34
Enter 3 element : 45
Enter 4 element : 56
Enter 5 element : 67
Enter 6 element : 78

Enter the number which you want to find : 78
Element found
*/