#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    int getMax(int a,int b){
        if(a > b) return a;
        return b;
    }
    int maxDepth(struct TNode *root){
        if(root == NULL) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return getMax(left,right) + 1;
    }
    
    
    void main(){
        int in[] =  {4,8,2,5,1,6,3,7};
        int post[] = {8,4,5,2,6,7,3,1};
        int n = sizeof(in)/sizeof(int);
        indx = n-1;
        root = buildTree(in,post,0,n-1,n);
        updateLevel(root,1);
        printf("Maximum depth of Binary Tree is : %d",maxDepth(root));
    }
    
    
  
//     OUTPUT 

//     Maximum depth of Binary Tree is : 4
  