#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #define MAX 5
    
    int front = -1;
    int rear = -1;
    int size = 0;
    int queue[MAX];
    
    void enque(int val){
        if(front == 0 && rear == MAX-1 || front == rear+1){
            printf("Queue is Full!");
            return;
        }else if(rear == -1){
            front = rear = 0;
        }else rear = (rear+1)%MAX;
        queue[rear] = val;
    }
    
    int deque(){
        if(front == -1){
            printf("Queue is Empty!");
            return -1;
        }
        int val = queue[front];
        if(front == rear){
            front = rear = -1;
            return val;
        }
        front = (front+1)%MAX;
        return val;
    }
    int peek(){
        if(front == -1){
            return -1;
        }
        return queue[front];
    }
    
    void display(){
      if(front == rear){
        if(front != -1){
            printf("%d",queue[front]);
        }
        printf("Queue is Empty");
        return;
      }
      int i = front;
      while(i != rear){
        printf("%d ",queue[i]);
        i = (i+1)%MAX;
      }
      printf("%d",queue[rear]);
    }
    
    int isFull(){
        if(size == MAX){
            return 1;
        }
        return 0;
    }
    
    int isEmpty(){
        if(size == 0) {
            return 1;
        }
        return 0;
    }
    
    void main(){
        enque(10);
        enque(20);
        enque(30);
        enque(40);
        deque();
        display();
    }
// OUTPUT 

//     20 30 40