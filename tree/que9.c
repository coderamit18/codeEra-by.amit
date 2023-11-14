#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    //8. CREATE BINARY SEARCH TREE DYNAMICALLY (INSERT, DELETE, SEARCH, PREORDER, INORDER, POSTORDER, MINIMUM ELEMENT)
    struct Tree{
        int data;
        struct Tree *left;
        struct Tree *right;
    };
    struct Tree *root = NULL,*newNode,*search,*prevSearch;
    void insert(int val){
        if(root == NULL){
            root = (struct Tree*)malloc(sizeof(struct Tree));
            root->data = val;
            root->left = NULL;
            root->right = NULL;
            return;
        }
        newNode = (struct Tree*)malloc(sizeof(struct Tree));
        if(newNode != NULL){
            prevSearch  = NULL;
            search = root;
            while(search != NULL){
                if(search->data > val){
                    prevSearch = search;
                    search = search->left;
                }else if(search->data < val){
                    prevSearch = search;
                    search = search->right;
                }else {
                    printf("Duplicate is not allowed!");
                    return;
                }
            }
             // inserting the node 
            if(prevSearch->data > val){
                prevSearch->left =  newNode;
                prevSearch->left->data = val;
              }
            if(prevSearch->data < val){
                prevSearch->right = newNode;
                prevSearch->right->data = val;
            }
            newNode->left = NULL;
            newNode->right = NULL;
        }
    }
    
    struct Tree *prevIS = NULL;
    struct Tree* findInorderSuccessor(struct Tree *node){
        if(node == NULL){
            return node;
        }
        while(node->left != NULL){
            prevIS = node;
            node = node->left;
        }
        return node;
    }
    
    int delete(int val){
        prevSearch = NULL;
        search = root;
        while(search != NULL){
            // search left move krega
            if(search->data > val){
                prevSearch = search;
                search = search->left;
            // search right move krega
            }else if(search->data < val){
                prevSearch = search;
                search = search->right;
            }else { // search eqaul hai value k
                // no child node.
                if(search->left == NULL && search->right == NULL){
                    if(prevSearch->data > val){
                        prevSearch->left = NULL;
                    }else if(prevSearch->data < val){
                        prevSearch->right = NULL;
                    }
                }
                // one-child node.
                if(search->left == NULL || search->right == NULL){
                    if(prevSearch->data > val){
                        // left side
                        if(search->left == NULL){
                            prevSearch->left = search->right;
                        }else{
                            prevSearch->left = search->left;
                        }
                    }else {
                        // right side
                         if(search->left == NULL){
                            prevSearch->right = search->right;
                        }else{
                            prevSearch->right = search->left;
                        }
                    }
                }
               // 2 child  
                if(search->left != NULL && search->right != NULL){
                //1. find successor.
                struct Tree *IS = findInorderSuccessor(search->right);
                //2. swap data of succsessor with node to be deleetd.
                 search->data = IS->data;
                //3. delete succsessor.
                prevIS->left = NULL;
            }
                break;
            }
        }
    }
    
    int searchFunc(int val){
        if(root == NULL){
            return 0;
        }
        search = root;
        while(search != NULL){
            if(search->data == val){
                return 1;
            }
            if(search->data > val){
                search = search->left;
            }else {
                search = search->right;
            }
        }
        return 0;
    }
    
    void preorder(struct Tree *node){
        if(node == NULL){
            return;
        }
        printf("%d ",node->data);
        preorder(node->left);
        preorder(node->right);
    }
    void inOrder(struct Tree *node){
        if(node == NULL){
            return;
        }
        inOrder(node->left);
        printf("%d ",node->data);
        inOrder(node->right);
    }
    void postOrder(struct Tree *node){
        if(node == NULL){
            return;
        }
        postOrder(node->left);
        postOrder(node->right);
        printf("%d ",node->data);
    }
    
    int getMin(){
        if(root == NULL){
            return -1;
        }
        search = root;
        while(search != NULL){
            prevSearch = search;
            search = search->left;
        }
        return prevSearch->data;
    }
    
    void main(){
        insert(100);
        insert(110);
        insert(120);
        insert(90);
        insert(105);
        insert(95);
        insert(94);
        insert(80);
        delete(100);
        printf("Min is : %d",getMin());
        printf("PreOrder : ");
        preorder(root);
        printf("Inorder : ");
        inOrder(root);
        printf("PostOrder : ");
        postOrder(root);
    }
    
    // output 

    // Min is : 80
    // PreOrder : 105 90 80 95 94 110 120  
    // Inorder : 80 90 94 95 105 110 120   
    // PostOrder : 80 94 95 90 120 110 105 
  