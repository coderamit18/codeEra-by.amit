#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    char *arr;
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

void push(struct stack *ptr, char value)
{
    if (isfull(ptr))
    {
        printf("Stack Overflow!!,cannot push '%c' to the stack\n\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("Character inserted......\n\n");
    }
}
char pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack underflow!!,cannot pop from the stack\n\n");
    }
    else
    {
        char value = ptr->arr[ptr->top];
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
    stck->arr = (char *)malloc(stck->size * sizeof(char));
    printf("Stack created !!\n\n");
    if (isfull(stck))
    {
        printf("Stack is full..\n\n");
    }

    // PUSH, POP, PEEK, ISEMPTY, ISFULL
    while (1)
    {
        printf("1. Push character in stack \n");
        printf("2. Pop character from stack \n");
        printf("3. Peek a character form stack \n");
        printf("4. Check stack is empty or not \n");
        printf("5. Check stack is full or not \n");
        // printf("6. Display all value \n");

        printf("\nChose a option\n");
        int number;
        scanf("%d", &number);
        char input;

        switch (number)
        {
        case 1:
            printf("Enter the character which you want to insert : ");
            scanf("%s", &input);
            push(stck, input);
            // printf("ds");
            break;

        case 2:
            printf("The character is %c\n\n", pop(stck));
            break;
        case 3:
            printf("Enter the position : ");
            int position1;
            scanf("%d", &position1);
            printf("The character of %d index is : %c\n", position1, peek(stck, position1));
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
// OUTPUT
/*

Enter the size of stack : 4
Stack created !!

1. Push character in stack
2. Pop character from stack
3. Peek a character form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
1
Enter the character which you want to insert : Q
Character inserted......

1. Push character in stack
2. Pop character from stack
3. Peek a character form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
1
Enter the character which you want to insert : W
Character inserted......

1. Push character in stack
2. Pop character from stack
3. Peek a character form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
1
Enter the character which you want to insert : E
Character inserted......

1. Push character in stack
2. Pop character from stack
3. Peek a character form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
1
Enter the character which you want to insert : R
Character inserted......

1. Push character in stack
2. Pop character from stack
3. Peek a character form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
1
Enter the character which you want to insert : T
Stack Overflow!!,cannot push 'T' to the stack

1. Push character in stack
2. Pop character from stack
3. Peek a character form stack
4. Check stack is empty or not
5. Check stack is full or not

Chose a option
5
Stack is full..

*/