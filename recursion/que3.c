#include <stdio.h>
int sum(int num)
{
    if (num == 0)
    {
        return 0;
    }

    int addition = num + sum(num - 1);
    return addition;
}
int main()
{
    printf("Enter the number : ");
    int number;
    scanf("%d", &number);
    printf("The sum of first %d number is : %d", number, sum(number));
    return 0;
}
// OUTPUT :
/*

Enter the number : 5
The sum of first 5 number is : 15
*/