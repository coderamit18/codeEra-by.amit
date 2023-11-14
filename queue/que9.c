#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    struct Node{
        char data[100];
        int priority;
        struct Node *next;
    };
    
    struct Node *head = NULL;
    struct Node *tail = NULL;
    
    int size = 0;
    
    void insertFirst(char val[],int pri){
        if(head == NULL){
            head = (struct Node*)malloc(sizeof(struct Node));
            strcpy(head->data,val);
            head->priority = pri;
            tail = head;
            tail->next = NULL;
            size++;
            return;
        }
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        strcpy(newNode->data,val);
        newNode->priority = pri;
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    void insertLast(char val[],int pri){
        if(head == NULL){
           insertFirst(val,pri);
            return;
        }
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        strcpy(newNode->data,val);
        newNode->priority = pri;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
        size++;
    }
    
    void insertInMiddle(char val[],int pri,int pos){
        if(pos == 0) {
            printf("Invalid pos");
            return;
        }
        if(pos == 1){
            insertFirst(val,pri);
            return;
        }
         if(pos == size){
           insertLast(val,pri);
           return;
        }
    
        if(pos > size+1){
            printf("Invalid pos");
            return;
        }
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        if(newNode !=  NULL){
          struct Node *prev = head;
            for(int i = 1; i < pos-1;i++){
            prev = prev->next;
        }
        strcpy(newNode->data,val);
        newNode->priority = pri;
        newNode->next = prev->next;
        prev->next = newNode;
        size++;
        }else {
            printf("LinkedList is Full!");
        }
       
    }
    
    char* deleteFirst(){
        if(size == 0){
            printf("List is Empty!");
            return NULL;
        }
        char *data = head->data;
        if(size == 1){
            head = tail = NULL;
            size--;
            return data;
        }
        head = head->next;
        size--;
        return data;
    }
    
    
    void display(){
        struct Node *temp = head;
        while(temp != NULL){
            printf("%s->",temp->data);
            temp = temp->next;
        }
        printf("null");
    }
    
    
    void add(char val[],int pri){
        if(size == 0){
            insertFirst(val,pri);
            return;
        }
        int i = 1;
        struct Node *temp = head;
        while(temp != NULL){
            if(temp->priority > pri){
                insertInMiddle(val,pri,i);
                break;
              }
              i++;
              temp = temp->next;
        }
        if(temp == NULL){
            insertLast(val,pri);
        }
    }
    
    char* delete(){
      return deleteFirst();
    }
    char *peek(){
        return head->data;
    }
    void main(){
        add("ho",5);
        add("kese",2);
        add("hello",1);
        add("amit",0);
        delete();
        display();
    }
    // OUTPUT
// hello->kese->ho->null