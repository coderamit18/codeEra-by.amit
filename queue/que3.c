#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#define MAX 10
int size = 0;
int queue[MAX];
int priority[MAX];

void rightShift(int index)
{
    for (int j = size - 1; j >= index; j--)
    {
        queue[j + 1] = queue[j];
    }
    for (int j = size - 1; j >= index; j--)
    {
        priority[j + 1] = priority[j];
    }
}
int isEmpty()
{
    if (size == 0)
        return 1;
    return 0;
}
int isFull()
{
    if (size == MAX)
        return 1;
    return 0;
}
void add(int val, int pri)
{
    if (size >= MAX)
    {
        printf("Queue is Full!");
        return;
    }
    if (size == 0)
    {
        queue[0] = val;
        priority[0] = pri;
        size++;
        return;
    }
    for (int j = 0; j < MAX; j++)
    {
        if (priority[j] > pri)
        {
            rightShift(j);
            queue[j] = val;
            priority[j] = pri;
            break;
        }
        else
        {
            // empty slot.
            if (priority[j] == -1)
            {
                queue[j] = val;
                priority[j] = pri;
                break;
            }
        }
    }
    size++;
    return;
}
void leftShift()
{
    for (int i = 1; i < size; i++)
    {
        queue[i - 1] = queue[i];
        priority[i - 1] = priority[i];
    }
}
int delete()
{
    if (size == 0)
    {
        printf("Queue is Empty!");
        return -1;
    }
    int val = queue[0];
    leftShift();
    size--;
    return val;
}
int peek()
{
    if (size == 0)
    {
        printf("Queue is Empty!");
        return -1;
    }
    return queue[0];
}
void display()
{
    for (int i = 0; i < MAX; i++)
        printf("%d ", queue[i]);
        printf(" ");
}

void main()
{
        for (int i = 0; i < MAX; i++)
        {
            priority[i] = -1;
        }
        add(4, 5);
        add(3, 7);
        add(2, 8);
        add(12, 2);
        add(32, 3);
        add(43, 1);
        add(33, 0);
        add(65, 4);
        delete ();
        delete ();
        delete ();
        display();
}
