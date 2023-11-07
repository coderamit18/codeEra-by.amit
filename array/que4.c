#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of element : ");
    scanf("%d", &n);
    int arr[n];
    int brr[n];
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
    }// n=4        j=3    
    for (int i = 0,j=n-1; i < n-1,j>=0; i++,j--)
    {
        brr[j]=arr[i];
    }
    
    printf("\nReversed array : ");
    // display all values
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", brr[i]);
    }

    return 0;
}
//OUTPUT
/*

Enter the number of element : 5
Enter the 1 element : 1
Enter the 2 element : 2
Enter the 3 element : 3
Enter the 4 element : 4
Enter the 5 element : 5
Your array : 1  2       3       4       5
Reversed array : 5      4       3       2       1*/