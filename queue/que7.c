#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <string.h>
    #define MAX 10
    int size = 0;
    char queue[MAX][100];
    int priority[MAX];
    
    void rightShift(int index){
        for(int j = size - 1;j >= index;j--){
            strcpy(queue[j+1],queue[j]);
        }
        for(int j = size-1;j >= index;j--){
            priority[j+1] = priority[j];
        }
    }
    int isEmpty(){
        if(size == 0) return 1;
        return 0;
    }
    int isFull(){
        if(size == MAX) return 1;
        return 0;
    }
    void add(char val[],int pri){
        if(size >= MAX ){
            printf("Queue is Full!");
            return;
        }
        if(size == 0){
            strcpy(queue[0],val);
            priority[0] = pri;
            size++;
            return;
        }
        for(int j = 0;j < MAX;j++){
            if(priority[j] > pri){
                rightShift(j);
                 strcpy(queue[j],val);
                priority[j] = pri;
                break;
            }else {
                // empty slot.
                if(priority[j] == -1){
                    strcpy(queue[j],val);
                    priority[j] = pri;
                    break;
                }
            }
        }
        size++;
        return;
    }
    void leftShift(){
        for(int i = 1;i < size;i++){
           strcpy(queue[i-1],queue[i]);
            priority[i-1] = priority[i];
        }
    }
    char* delete(){
        if(size == 0){
            printf("Queue is Empty!");
            return NULL;
        }
        char *val = queue[0];
        leftShift();
        size--;
        return val;
    }
    char* peek(){
        if(size == 0){
            printf("Queue is Empty!");
            return NULL;
        }
        return queue[0];
    }
    void display(){
        for(int i = 0;i < size;i++) printf("%s ",queue[i]);
        printf("");
    }
    
    void main(){
        for(int i = 0;i < MAX;i++){
        priority[i] = -1;
        }
        add("hello",40);
        add("amit",30);
        add("hi",1);
        delete();
        display();
    }
  // output
  /*
  amit hello 
  */