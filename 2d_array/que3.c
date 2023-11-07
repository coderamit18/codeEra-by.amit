#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter number of row : ");
    scanf("%d", &r);
    printf("Enter number of colunm : ");
    scanf("%d", &c);
    int arr1[r][c];

    printf("\nEnter matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Transpose of matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%d   ", arr1[j][i]);
        }
        printf("\n");
    }

    return 0;
}
// OUTPUT
/*

Enter number of row : 3
Enter number of colunm : 3

Enter matrix :
1 2 3
4 5 6
7 8 9
Transpose of matrix :
1   4   7
2   5   8
3   6   9
*/