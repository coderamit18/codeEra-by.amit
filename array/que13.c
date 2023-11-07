#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int arr[n];
    
    // Taking inputs
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element :", i + 1);
        scanf("%d", &arr[i]);
    }

    //count no of duplicate values
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    printf("Number of duplicate value : %d",count);
    return 0;
}
// OUTPUT
/*

Enter the number of elements : 5
Enter 1 element :1
Enter 2 element :2
Enter 3 element :3
Enter 4 element :1
Enter 5 element :1
Number of duplicate value : 3
*/