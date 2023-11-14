#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    
    struct Node{
        int data;
        struct Node *left;
        struct Node *right;
    };
    int indx = 0;
    struct Node *root;
    int findElem(int in[],int n,int elem){
        for(int i = 0;i < n;i++){
            if(in[i] == elem) return i;
        }
        return -1;
    }
    
    struct Node* buildTree(int in[],int pre[],int inOrderStart,int inOrderEnd,int n){
        // base case.
        if(inOrderStart > inOrderEnd || indx >= n) return NULL;
    
        struct Node *root = (struct Node*)malloc(sizeof(struct Node));
        int elem = pre[indx++];
        root->data = elem;
        int pos = findElem(in,n,elem);
        if(pos == -1) {
            printf("Invalid input !");
            return NULL;
        }
        root->left = buildTree(in,pre,inOrderStart,pos-1,n);
        root->right = buildTree(in,pre,pos + 1,inOrderEnd,n);
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
        int in[] = {3,1,4,0,5,2};
        int pre[] = {0,1,3,4,2,5};
        int n = sizeof(in)/sizeof(int);
        root = buildTree(in,pre,0,n-1,n);
        printf("Preorder of build tree is : ");
        preorder(root);
    }
// OUTPUT 

//     Preorder of build tree is : 0 1 3 4 2 5