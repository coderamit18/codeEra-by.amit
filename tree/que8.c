#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #define MAX 30
    //7. CREATE BINARY SEARCH TREE USING ARRAYS (INSERT, DELETE, SEARCH, PREORDER, INORDER, POSTORDER, MINIMUM ELEMENT)
    int tree[MAX];
    int size = 0;
    
    void insert(int val){
        if(size == MAX){
            printf("Tree is Full!");
            return;
        }
        // add root value.
        if(size == 0){
            tree[0] = val;
            size++;
            return;
       }
       int i = 0;
       // getting correct index.
       while(i < MAX && tree[i] != -1){
        if(val < tree[i]){
            i = 2*i + 1;
        }else if(val > tree[i]){
            i = 2*i + 2;
        }else {
            printf("Duplicate is not allowed!");
            break;
        }
      }
      if(i < MAX){
        tree[i] = val;
        size++;
      }else {
        printf("Tree is Full!");
        return;
      }
    }
    
    int delete(int val){
        if(size == 0){
            printf("Tree is Empty!");
            return -1;
        }
        if(size == 1){
            size = 0;
            return 0;
        }
         int i = 0;
       // getting correct index.
       while(i < MAX && tree[i] != -1){
        if(tree[i] == val){
            break;
        }
        if(val < tree[i]){
            i = 2*i + 1;
        }else if(val > tree[i]){
            i = 2*i + 2;
        }
      }
      if(i < MAX && tree[i] != -1){
        size--;
        int val = tree[i];
        tree[i] = -1;
        return i;
      }else {
        printf("Value not found!");
        return -1;
      }
    
    }
    
    
    int search(int val){
        if(size == 0){
            printf("Tree is Empty!");
            return -1;
        }
         int i = 0;
       // getting correct index.
       while(i < MAX && tree[i] != -1){
        if(tree[i] == val){
            break;
        }
        if(val < tree[i]){
            i = 2*i + 1;
        }else if(val > tree[i]){
            i = 2*i + 2;
        }
      }
      if(i < MAX && tree[i] != -1){
        return i;
      }else {
        printf("Value not found!");
        return -1;
      }
    }
    
    
    void preOrder(int index){
     if(index >= MAX || index < 0){
        return;
     }
     printf("%d ",tree[index]);
     int leftIndx = 2*index + 1;
     int rightIndx = 2*index + 2;
     if(tree[leftIndx] != -1) preOrder(leftIndx);
     if(tree[rightIndx] != -1) preOrder(rightIndx);
    }
    
    void inOrder(int index){
     if(index >= MAX || index < 0){
        return;
     }
     int leftIndx = 2*index + 1;
     int rightIndx = 2*index + 2;
     if(tree[leftIndx] != -1) inOrder(leftIndx);
     printf("%d ",tree[index]);
     if(tree[rightIndx] != -1) inOrder(rightIndx);
    }
    
    void postOrder(int index){
     if(index >= MAX || index < 0){
        return;
     }
     int leftIndx = 2*index + 1;
     int rightIndx = 2*index + 2;
     if(tree[leftIndx] != -1) postOrder(leftIndx);
     if(tree[rightIndx] != -1) postOrder(rightIndx);
     printf("%d ",tree[index]);
    }
    
    int getMin(){
        if(size == 0){
            return -1;
        }
        int i = 0;
        int prev = -1;
         // getting correct index.
       while(i < MAX && tree[i] != -1){
            prev = i;
            i = 2*i + 1;
      }
      if(prev < MAX) return tree[prev];
    }
    
    void main(){
      for(int i = 0;i < MAX;i++){
        tree[i] = -1;
      }
      insert(100);
      insert(80);
      insert(85);
      insert(70);
      insert(110);
      insert(50);
      insert(40);
      insert(105);
      insert(120);
      delete(70);
      insert(60);
      printf("Key Found At Index : %d ",search(60));
      printf("Min : %d",getMin());
      printf("PreOrder : ");
      preOrder(0);
      printf("Inorder : ");
      inOrder(0);
      printf("PostOrder : ");
      postOrder(0);
      printf("");
     
    }
    
    
  
    //   output 

    // Key Found At Index : 3 

    // Min : 40
    
    // PreOrder : 100 80 60 50 40 85 110 105 120  
    // Inorder : 40 50 60 80 85 100 105 110 120   
    // PostOrder : 40 50 60 85 80 105 120 110 100 
  