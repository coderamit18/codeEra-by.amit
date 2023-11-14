#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#define MAX 5

int front = -1;
int rear = -1;
int size = 0;
char queue[MAX][100];

void enque(char str[])
{
    if (front == 0 && rear == MAX - 1 || front == rear + 1)
    {
        printf("Queue is Full!");
        return;
    }
    else if (rear == -1)
    {
        front = rear = 0;
    }
    else
        rear = (rear + 1) % MAX;
    strcpy(queue[rear], str);
}

char *deque()
{
    if (front == -1)
    {
            printf("Queue is Empty!");
            return NULL;
    }
    char val[100];
    strcpy(val, queue[front]);
    if (front == rear)
    {
            front = rear = -1;
            return &val[0];
    }
    front = (front + 1) % MAX;
    return &val[0];
}
char *peek()
{
    if (front == -1)
    {
            return NULL;
    }
    return queue[front];
}

void display()
{
    if (front == rear)
    {
            if (front != -1)
            {
                printf("%d", queue[front]);
            }
            printf("Queue is Empty");
            return;
    }
    int i = front;
    while (i != rear)
    {
            printf("%s ", queue[i]);
            i = (i + 1) % MAX;
    }
    printf("%s", queue[rear]);
}

int isFull()
{
    if (size == MAX)
    {
            return 1;
    }
    return 0;
}

int isEmpty()
{
    if (size == 0)
    {
            return 1;
    }
    return 0;
}

void main()
{
    enque("hello");
    enque("this is");
    enque("Amit rawat");
    enque("how are you?");
    display();
    deque();
    printf("\n");
    display();
}
// OUTPUT
/*
hello this is Amit rawat how are you?
this is Amit rawat how are you?
*/