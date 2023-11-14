#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    
    struct QNode {
        struct TNode *data;
        struct QNode *next;
    };
    
    struct QNode *front = NULL,*rear = NULL;
    int Qsize = 0;
    int isEmpty(){
        if(Qsize == 0){
            return 1;
        }
        return 0;
    }
    void add(struct TNode *val){
        if(rear == NULL){
            rear = (struct QNode*)malloc((sizeof(struct QNode)));
            rear->data = val;
            rear->next = NULL;
            front = rear;
            Qsize++;
            return;
        }
        struct QNode *temp = (struct QNode*)malloc((sizeof(struct QNode)));
        if(temp == NULL){
            printf("Queue if FULL!");
            return;
        }
        temp->data = val;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
        Qsize++;
    }
    
    struct TNode* remove1(){
        if(Qsize == 0){
            printf("Queue is Empty!");
            return NULL;
        }
        struct TNode *val = front->data;
        struct QNode *temp = front;
        front = front->next;
        free(temp);
        Qsize--;
        return val;
    }
    
    struct TNode* peek(){
        if(front == NULL){
            printf("Queue is Empty!");
            return NULL;
        }
        return front->data; 
    }
    int isQEmpty(){
        if(Qsize == 0) return 1;
        return 0;
    }
    void levelOrder(struct TNode *root){
        add(root);
        add(NULL);
        while(!isQEmpty()){
            struct TNode *cur = remove1();
            if(cur == NULL){
                if(isQEmpty() == 1) break;
                else {
                    add(NULL);
                }
            }else {
                printf("%d ",cur->data);
                if(cur->left != NULL) add(cur->left);
                if(cur->right != NULL) add(cur->right);
            }
        }
    
    }
    
    
    void main(){
        int in[] =  {4,8,2,5,1,6,3,7};
        int post[] = {8,4,5,2,6,7,3,1};
        int n = sizeof(in)/sizeof(int);
        indx = n-1;
        root = buildTree(in,post,0,n-1,n);
        levelOrder(root);
    }
    
  
//   output 

// 1 2 3 4 5 6 7 8 
  