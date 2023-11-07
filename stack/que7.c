#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
struct stack
{
    int top;
    int last;
    int size;
    int *arr;
};
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int value)
{
    if (ptr->top < ptr->last)
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("Value inserted from first......\n\n");
    }

    else
    {
        printf("Stack is full");
    }
}
void push1(struct stack *ptr, int value)
{
    if (ptr->top < ptr->last)
    {
        ptr->last--;
        ptr->arr[ptr->last] = value;
        printf("Value inserted from last......\n\n");
    }
    else
    {
        printf("Stack is full.\n\n");
    }
}
int pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack underflow!!,cannot pop from the stack\n\n");
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int pop1(struct stack *ptr)
{
    if (ptr->last == ptr->size)
    {
        printf("Second array is empty\n\n");
    }
    else
    {
        int value = ptr->arr[ptr->last];
        ptr->last++;
        return value;
    }
}
int peek(struct stack *ptr, int i)
{
    int arrayind = ptr->top - i + 1;
    if (arrayind < 0)
    {
        printf("Invalid number\n\n");
        return INT_MIN;
    }
    else
    {
        return ptr->arr[arrayind];
    }
}
int main()
{
    int n;
    struct stack *stck;
    stck->top = -1;
    printf("Enter the size of stack : ");
    scanf("%d", &n);
    stck->size = n;
    stck->last = stck->size;
    stck->arr = (int *)malloc(stck->size * sizeof(int));
    printf("Stack created !!\n\n");
    if (isfull(stck))
    {
        printf("Stack is full..\n\n");
    }
    // push(stck, 12);

    // PUSH, POP, PEEK, ISEMPTY, ISFULL
    while (1)
    {
        printf("1. Push value in stack from first \n");
        printf("2. Pop value from stack from first \n");
        printf("3. Push value in stack from last \n");
        printf("4. Pop value from stack from last \n");
        printf("5. Peek a value form stack \n");

        printf("\nChose a option\n");
        int number;
        scanf("%d", &number);
        int value12;
        int value;

        switch (number)
        {
        case 1:
            printf("Enter the value which you want to insert : ");
            scanf("%d", &value12);
            push(stck, value12);
            break;

        case 2:
            printf("The value is %d\n\n", pop(stck));
            break;

        case 3:
            printf("Enter the value which you want to insert : ");
            scanf("%d", &value);
            push1(stck, value);
            break;
        case 4:

            printf("The value is %d\n\n", pop1(stck));
            break;

        case 5:
            printf("Enter the position : ");
            int position1;
            scanf("%d", &position1);
            printf("The value of %d index is : %d\n", position1, peek(stck, position1));
            break;

        default:
            printf("Enter valid option\n");
            break;
        }
    }

    return 0;
}
// OUTPUT
/*

Enter the size of stack : 4
Stack created !!

1. Push value in stack from first
2. Pop value from stack from first
3. Push value in stack from last
4. Pop value from stack from last
5. Peek a value form stack

Chose a option
1
Enter the value which you want to insert : 12
Value inserted from first......

1. Push value in stack from first
2. Pop value from stack from first
3. Push value in stack from last
4. Pop value from stack from last
5. Peek a value form stack

Chose a option
2
The value is 12

1. Push value in stack from first
2. Pop value from stack from first
3. Push value in stack from last
4. Pop value from stack from last
5. Peek a value form stack

Chose a option
23
Enter valid option
1. Push value in stack from first
2. Pop value from stack from first
3. Push value in stack from last
4. Pop value from stack from last
5. Peek a value form stack

Chose a option
1
Enter the value which you want to insert : 34
Value inserted from first......

1. Push value in stack from first
2. Pop value from stack from first
3. Push value in stack from last
4. Pop value from stack from last
5. Peek a value form stack

Chose a option
2
The value is 34

*/