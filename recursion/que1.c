#include <stdio.h>
int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    int factorial = num * fact(num - 1);
    return factorial;
}
int main()
{
    printf("Enter a number : ");
    int number;
    scanf("%d", &number);

    printf("Factorical of %d is : %d", number, fact(number));
    return 0;
}
// OUTPUT
/*

Enter a number : 5
Factorical of 5 is : 120
*/