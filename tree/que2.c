#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    
    struct Node{
        int data;
        struct Node *left;
        struct Node *right;
    };
    int indx;
    struct Node *root;
    int findElem(int in[],int n,int elem){
        for(int i = 0;i < n;i++){
            if(in[i] == elem) return i;
        }
        return -1;
    }
    
    struct Node* buildTree(int in[],int post[],int inOrderStart,int inOrderEnd,int n){
        // base case.
        if(inOrderStart > inOrderEnd || indx < 0) return NULL;
    
        struct Node *root = (struct Node*)malloc(sizeof(struct Node));
        int elem = post[indx--];
        root->data = elem;
        int pos = findElem(in,n,elem);
        if(pos == -1) {
            printf("Invalid input !");
            return NULL;
        }
        root->right = buildTree(in,post,pos + 1,inOrderEnd,n);
        root->left = buildTree(in,post,inOrderStart,pos-1,n);
        return root;
    }
    
    
    void preorder(struct Node *node){
     if(node == NULL){
        return;
     }
     printf("%d ",node->data);
     preorder(node->left);
     preorder(node->right);
    }
    
    void main(){
        int in[] =  {4,8,2,5,1,6,3,7};
        int post[] = {8,4,5,2,6,7,3,1};
        int n = sizeof(in)/sizeof(int);
        indx = n-1;
        root = buildTree(in,post,0,n-1,n);
        printf("Preorder of build tree is : ");
        preorder(root);
    }
  
//   output 

    // Preorder of build tree is : 1 2 4 8 5 3 6 7 
  