#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
struct Tree
{
    int data;
    struct Tree *left;
    struct Tree *right;
};
struct Tree *root = NULL, *newNode, *search, *prevSearch;
struct Tree *findInSucessor(struct Tree *node)
{
    if (node == NULL)
    {
        return node;
    }
    node = node->right;
    while (node->left != NULL)
    {
        node = node->left;
    }
    return node;
}
struct Tree *findPrecedessor(struct Tree *node)
{
    if (node == NULL)
    {
        return node;
    }
    node = node->left;
    while (node->right != NULL)
    {
        node = node->right;
    }
    return node;
}
void main()
{
    insert(100);
    insert(110);
    insert(120);
    insert(105);
    insert(85);
    insert(70);
    insert(80);
        printf("INORDER SUCCESSOR is : %d",(findInSucessor(root)->data));
        printf("PREDECESSOR  is : %d",(findPrecedessor(root)->data));
}


    // output 

    // INORDER SUCCESSOR is : 105 PREDECESSOR is : 85