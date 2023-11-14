#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char data[100];
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void addLast(char str[])
{
    if (rear == NULL)
    {
        rear = (struct Node *)malloc((sizeof(struct Node)));
        strcpy(rear->data, str);
        rear->next = NULL;
        front = rear;
        return;
    }
    struct Node *temp = (struct Node *)malloc((sizeof(struct Node)));
    if (temp == NULL)
    {
        printf("Queue if FULL!");
        return;
    }
    strcpy(temp->data, str);
    temp->next = NULL;
    rear->next = temp;
    rear = temp;
}
void addFirst(char str[])
{
    if (rear == NULL)
    {
        rear = (struct Node *)malloc((sizeof(struct Node)));
        strcpy(rear->data, str);
        rear->next = NULL;
        front = rear;
        return;
    }
    struct Node *temp = (struct Node *)malloc((sizeof(struct Node)));
    if (temp == NULL)
    {
        printf("Queue if FULL!");
        return;
    }
    strcpy(rear->data, str);
    temp->next = front;
    front = temp;
}

char *removeFirst()
{
    if (front == NULL)
    {
        printf("Queue is Empty!");
        return NULL;
    }
    char val[100];
    strcpy(val, front->data);
    struct Node *temp = front;
    front = front->next;
    free(temp);
    return val;
}

char *removeLast()
{
    if (front == NULL)
    {
        printf("Queue is Empty!");
        return NULL;
    }
    char val[100];
    strcpy(val, front->data);
    struct Node *temp = front;
    while (temp->next != NULL && temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    rear = temp;
    return val;
}

char *getFirst()
{
    if (front == NULL)
    {
        printf("Queue is Empty!");
        return NULL;
    }
    return front->data;
}
char *getLast()
{
    if (front == NULL)
    {
        printf("Queue is Empty!");
        return NULL;
    }
    return rear->data;
}
void display()
{
    if (front == NULL)
        return;
    struct Node *temp = front;
    while (temp != NULL)
    {
        printf("%s ", temp->data);
        temp = temp->next;
    }
}
void main()
{
    addFirst("My Name");
    addLast("Amit rawat");
    addLast("Nice to meet you!!");
    display();
    removeFirst();
    removeLast();
    printf("\n");
    display();
}

// OUTPUT
/*
My Name Amit rawat Nice to meet you!! 
Amit rawat
 */