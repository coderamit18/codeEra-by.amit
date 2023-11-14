#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <string.h>
    #define MAX 10
    int front = -1;
    int rear = -1;
    int size = 0;
    char queue[MAX][100];
    
    void enque(char str[]){
        if(size == MAX){
            printf("Queue is Full!");
            return;
        }
        size++;
        if(front == -1 && rear == -1){
            //adding first time
            front = rear = 0;
            strcpy(queue[rear],str);
            return;
        }
        rear++;
        strcpy(queue[rear],str);
    }
    
    char* deque(){
        if(size == 0) {
            printf("Queue is Empty!");
            return NULL;
        }
        char val[100];
        if(size == 1){
            strcpy(val,queue[front]);
            queue[front];
            front = rear = -1;
            return &val[0];
        }
        //shifting items towards left.
         strcpy(val,queue[front]);
        for(int i = front+1; i <= rear;i++){
            strcpy(queue[i-1],queue[i]);
        }
        rear--;
        size--;
        return &val[0];
    }
    
    void display(){
        if(size == 0) {
         printf("Queue is Empty!");
         return ;
        }
        for(int i = front; i <= rear;i++){
            printf("%s ",queue[i]);
        }
    }
    
    char* peek(){
         if(size == 0) {
            printf("Queue is Empty!");
            return NULL;
        }
        return queue[front];
    }
    int isEmpty(){
        if(size == 0) return 1;
        return 0;
    }
    int isFull(){
        if(size == MAX) return 1;
        return 0;
    }
    
    
    void main(){
        enque("Hello");
        enque("amit");
        enque("How are you ?");
        display();    
        dequeue();
        printf("\n");
        display();
    }
  