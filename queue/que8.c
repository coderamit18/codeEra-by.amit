#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    
    struct Node{
        int data;
        int priority;
        struct Node *next;
    };
    
    struct Node *head = NULL;
    struct Node *tail = NULL;
    
    int size = 0;
    
    void insertFirst(int val,int pri){
        if(head == NULL){
            head = (struct Node*)malloc(sizeof(struct Node));
            head->data = val;
            head->priority = pri;
            tail = head;
            tail->next = NULL;
            size++;
            return;
        }
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->priority = pri;
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    void insertLast(int val,int pri){
        if(head == NULL){
           insertFirst(val,pri);
            return;
        }
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->priority = pri;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
        size++;
    }
    
    void insertInMiddle(int val,int pri,int pos){
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
        newNode->data = val;
        newNode->data = pri;
        newNode->next = prev->next;
        prev->next = newNode;
        size++;
        }else {
            printf("LinkedList is Full!");
        }
       
    }
    
    int deleteFirst(){
        if(size == 0){
            printf("List is Empty!");
            return -1;
        }
        int data = head->data;
        if(size == 1){
            head = tail = NULL;
            size--;
            return data;
        }
        head = head->next;
        size--;
        return data;
    }
    int deleteLast(){
         if(size == 0){
            printf("List is Empty!");
            return -1;
        }
        if(size == 1){
            return deleteFirst();
        }
        struct Node *prev = head;
        while(prev->next != tail){
            prev = prev->next;
        }
        int data = tail->data;
        prev->next = NULL;
        tail = prev;
        size--;
        return data;
    }
    int deleteInMiddle(int pos){
        if(pos == 0) {
            printf("Invalid pos!");
            return -1;
        }
        if(pos == 1) {
            return deleteFirst();
        }
        if(pos == size){
            return deleteLast();
        }
        if(pos > size){
            printf("Invalid pos!");
            return -1;
        }
        struct Node *temp = head;
    
        for(int i = 1; i < pos - 1;i++){
            temp = temp->next;
        }
        if(temp != NULL && temp->next != NULL){
            int data = temp->next->data;
            temp->next = temp->next->next;
            return data;
        }
        return -1;
    }
    
    void display(){
        struct Node *temp = head;
        while(temp != NULL){
            printf("%d->",temp->data);
            temp = temp->next;
        }
        printf("null");
    }
    
    
    void add(int val,int pri){
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
    
    int delete(){
      return deleteFirst();
    }
    void main(){
        add(10,5);
        add(50,10);
        add(50,0);
        add(60,3);
        add(80,2);;
        add(90,80);
        display();
    }
  
// OUTPUT 

//     50->80->2->3->10->50->null
  