#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    struct TNode{
        int data;
        int level;
        struct TNode *left;
        struct TNode *right;
    };
    void updateLevel(struct TNode *node,int level){
        if(node == NULL){
           return;
        }
        node->level = level;
        updateLevel(node->left,level+1);
        updateLevel(node->right,level+1);
       }
    
       //4. PRINT RIGHT VIEW OF BINARY TREE
       void rightView(struct TNode *root){
           int level = 1;
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
                   if(cur->level == level) {
                       printf("%d ",cur->data);
                       level++;
                   }
                   if(cur->right != NULL) add(cur->right);
                   if(cur->left != NULL) add(cur->left);
               }
           }
       }
       
    void main(){
        int in[] =  {4,8,2,5,1,6,3,7};
        int post[] = {8,4,5,2,6,7,3,1};
        int n = sizeof(in)/sizeof(int);
        int indx = n-1;
        int root = buildTree(in,post,0,n-1,n);
        updateLevel(root,1);
        rightView(root);
    }
    
  
//   output 

// 1 3 7 8 
  