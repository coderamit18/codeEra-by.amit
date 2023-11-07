#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
struct stack
{
    int top;
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
    if (isfull(ptr))
    {
        printf("Stack Overflow!!,cannot push %d to the stack\n\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("Value inserted......\n\n");
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
    stck->arr = (int *)malloc(stck->size * sizeof(int));
    printf("Stack created !!\n\n");
    if (isfull(stck))
    {
        printf("Stack is full..\n\n");
    }

    // PUSH, POP, PEEK, ISEMPTY, ISFULL
    while (1)
    {
        printf("1. Push value in stack \n");
        printf("2. Pop value from stack \n");
        printf("3. Peek a value form stack \n");
        printf("4. Check stack is empty or not \n");
        printf("5. Check stack is full or not \n");
        // printf("6. Display all value \n");

        printf("\nChose a option\n");
        int number;
        scanf("%d", &number);
        int value12;

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
            printf("Enter the position : ");
            int position1;
            scanf("%d", &position1);
            printf("The value of %d index is : %d\n", position1, peek(stck, position1));
            break;

        case 4:
            if (isempty(stck) == 1)
            {
                printf("Stack is empty..\n\n");
            }
            else
            {
                printf("Stack is not empty..\n\n");
            }

            break;
        case 5:
            if (isfull(stck) == 1)
            {
                printf("Stack is full..\n\n");
            }
            else
            {
                printf("Stack is not full..\n\n");
            }

            break;

        default:
            printf("Enter valid option\n");
            break;
        }
    }

    return 0;
}
// OUTPUT : 
/*
                                             > cd "c:\Users\Ankit rawat\Desktop\Amit\DSA Practical\__website\stack\" ; if ($?) { gcc que1.c -o que1 } ; if ($?) { .\que1 }
Enter the size of stack : 3
Stack created !!

1. Push value in stack
2. Pop value from stack
3. Peek a value form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
4
Stack is empty..

1. Push value in stack
2. Pop value from stack
3. Peek a value form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
1
Enter the value which you want to insert : 12
Value inserted......

1. Push value in stack
2. Pop value from stack
3. Peek a value form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
1
Enter the value which you want to insert : 12
Value inserted......

1. Push value in stack
2. Pop value from stack
3. Peek a value form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
1
Enter the value which you want to insert : 23
Value inserted......

1. Push value in stack
2. Pop value from stack
3. Peek a value form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
5
Stack is full..

*/