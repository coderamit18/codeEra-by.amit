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
    printf("\nEnter the number which you want to search : ");
    scanf("%d", &key);

    int found = 0;
    // binary search
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            printf("\n%d is present in %d index", key, i);
        }
    }

    if (found == 0)
    {
        printf("%d is not present in array.", key);
    }

    return 0;
}
// OUTPUT :
/*

Enter the number of element : 5
Enter the 1 element : 12
Enter the 2 element : 23
Enter the 3 element : 34
Enter the 4 element : 45
Enter the 5 element : 65

Enter the number which you want to search : 45

45 is present in 3 index
*/