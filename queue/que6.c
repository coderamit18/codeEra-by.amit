#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    
    struct Node {
        int data;
        struct Node *next;
    };
    
    struct Node *front = NULL,*rear = NULL;
    
    void addLast(int val){
        if(rear == NULL){
            rear = (struct Node*)malloc((sizeof(struct Node)));
            rear->data = val;
            rear->next = NULL;
            front = rear;
            return;
        }
        struct Node *temp = (struct Node*)malloc((sizeof(struct Node)));
        if(temp == NULL){
            printf("Queue if FULL!");
            return;
        }
        temp->data = val;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
    void addFirst(int val){
         if(rear == NULL){
            rear = (struct Node*)malloc((sizeof(struct Node)));
            rear->data = val;
            rear->next = NULL;
            front = rear;
            return;
        }
        struct Node *temp = (struct Node*)malloc((sizeof(struct Node)));
        if(temp == NULL){
            printf("Queue if FULL!");
            return;
        }
         temp->data = val;
         temp->next = front;
         front = temp;
    }
    
    int removeFirst(){
        if(front == NULL){
            printf("Queue is Empty!");
            return -1;
        }
        int val = front->data;
        struct Node *temp = front;
        front = front->next;
        free(temp);
        return val;
    }
    int removeLast(){
        if(front == NULL){
            printf("Queue is Empty!");
            return -1;
        }
        int val = rear->data;
        struct Node *temp = front;
        while(temp->next !=NULL && temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        rear = temp;
        return val;
    }
    
    int getFirst(){
        if(front == NULL){
            printf("Queue is Empty!");
            return -1;
        }
        return front->data; 
    }
    int getLast(){
        if(front == NULL){
            printf("Queue is Empty!");
            return -1;
        }
        return rear->data; 
    }
    void display(){
        if(front == NULL) return;
        struct Node *temp = front;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
    void main(){
        addLast(10);
        addLast(20);
        addFirst(5);
        addFirst(2);
        addLast(30);
        removeLast();
        display();
        // printf("%d",removeFirst());
    
    }
  
// OUTPUT 

//     2 5 10 20 
  