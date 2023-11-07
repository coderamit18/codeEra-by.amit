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

    // checking of scalar matrix
    int check1 = 1;
    int check = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i != j)
            {
                if (arr1[i][j] != 0)
                {
                    check1 = 0;
                }
            }
            if (i != j)
            {
                if (arr2[i][j] != 0)
                {
                    check = 0;
                }
            }
        }
    }

    if (check1 == 0)
    {
        printf("Matrix 1 is not a scalar matrix\n");
    }
    if (check == 0)
    {
        printf("Matrix 2 is not a scalar matrix\n");
    }

    // product
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
    printf("\nProduct of two scalar matrix is : \n ");

    if (check == 0 || check1 == 0)
    {
        printf("%d", 0);
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {

                printf("%d   ", arr3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
// OUTPUT
/*

Enter number of row : 2
Enter number of colunm : 2

Enter first matrix :
1 0 
0 1
Enter second matrix :
2 0 
0 2

Product of two scalar matrix is :
 2   0
0   2
*/