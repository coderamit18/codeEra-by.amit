#include <stdio.h>
int add(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return num % 10 + add(num / 10);
}
int main()
{
    printf("Enter a number : ");
    int number;
    scanf("%d", &number);
    printf("Sum of digit is : %d", add(number));
    return 0;
}
// OUTPUT
/*

Enter a number : 45
Sum of digit is : 9
*/