#include <stdio.h>
int fib(int num)
{
    if (num <= 1)
    {
        return num;
    }

    return fib(num - 1) + fib(num - 2);
}
int main()
{
    printf("Enter a number : ");
    int number;
    scanf("%d", &number);
    printf("%dth Fibonacci Number: %d", number, fib(number));
    return 0;
}
// OUTPUT :
/*

Enter a number : 7
7th Fibonacci Number: 13
*/