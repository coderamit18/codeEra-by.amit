#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter number of row : ");
    scanf("%d", &r);
    printf("Enter number of colunm : ");
    scanf("%d", &c);
    int arr1[r][c];
    int arr2[r][c];
    int arr3[r][c];

    printf("\nEnter first matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter second matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
    printf("product of two matrix is : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%d   ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// OUPUT
/*
Enter number of row : 3
Enter number of colunm : 3

Enter first matrix :
1 2 3 4 5 6 7 8 9 
Enter second matrix :
3 2 1 6 5 4 9 8 7 
product of two matrix is :
3   4   3
24   25   24
63   64   63
*/