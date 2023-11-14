#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    struct Edge{
        int data;
        struct Edge *next;
    };
    
    struct Vertex{
        struct Vertex *next;
        int data;
        struct Edge *edge;
    };
    
    struct Vertex *start = NULL;
    struct Vertex *end = NULL;
    int size = 0;
    
    int search(int val){
        if(size == 0) return 0;
        struct Vertex *temp = start;
        while(temp != NULL){
            if(temp->data == val) return 1;
            temp = temp->next;
        }
        return 0;
    }
    
    void insert(int val){
        if(start == NULL){
            start = (struct Vertex*)malloc(sizeof(struct Vertex));
            start->data = val;
            start->next = NULL;
            start->edge = NULL;
            end = start;
            size++;
            return;
        }
        if(search(val) == 0){
            struct Vertex *nn = (struct Vertex*)malloc(sizeof(struct Vertex));
            if(nn != NULL){
            nn->data = val;
            nn->next = NULL;
            nn->edge = NULL;
            end->next = nn;
            end = nn;
            size++;
            }
        }else {
            printf("\n Dublicate vertex is not allowed!");
        }
    }
    
    struct Vertex* getNode(int val){
        struct Vertex *temp = start;
         while(temp != NULL){
            if(temp->data == val) return temp;
            temp = temp->next;
        }
        return NULL;
    }
    
    void insertEdge(int src,int dest){
        if(search(src) && search(dest)){
            printf("edge!");
            struct Vertex *srcVertex = getNode(src);
            struct Edge *temp = (struct Edge*)malloc(sizeof(struct Edge));
            struct Edge *e = (struct Edge*)malloc(sizeof(struct Edge));
            e->data = dest;
            e->next = NULL;
            if(srcVertex->edge == NULL){
                srcVertex->edge = e;
                return;
            }
            temp = srcVertex->edge;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = e;
        }else {
            printf("\n Invalid src and dest!");
        }
    }
    
    void printGraph(){
        struct Vertex *i = start;
        while(i != NULL){
            printf("%d->",i->data);
            struct Edge *j = i->edge;
            while(j != NULL){
                printf("%d ",j->data);
                j = j->next;
            }
            i = i->next;
            printf("\n ");
        }
    }
    struct Vertex* getParent(int val){
         struct Vertex *temp = start;
         struct Vertex *prev = NULL;
         while(temp->data != val){
            prev = temp;
            temp = temp->next;
        }
        return prev;
    }
    void delete(int val){
        if(start->data == val){
            start = start->next;
        }
        struct Vertex *par = getParent(val);
        // delete vertex.
        if(par != NULL && par->next != NULL){
            par->next = par->next->next;
        }
        // delete edge.
        struct Vertex *i = start;
        while(i != NULL){
            if(i->edge != NULL && i->edge->data == val){
                i->edge = i->edge->next;
                return;
            }
            struct Edge *prev = NULL;
            struct Edge *j = i->edge;
            while(j != NULL && j->data != val){
                prev = j;
                j = j->next;
            }
            if(prev != NULL){
                prev->next = prev->next->next;
            }
            i = i->next;
        }
    }
    
    void adjacentList(){
        int choice;
        int src,dest,val;
        while(1){
         printf("\n ----Select Choice----\n 1.Insert vertex\n 2.Insert edge\n 3.Delete\n 4.Exit\n ");
         scanf("%d",&choice);
            if(choice == 1){
                printf("\n Enter value of vertex : ");
                scanf("%d",&val);
                insert(val);
            }else if(choice == 2){
                printf("\n Enter src and destination vertex respectively : ");
                scanf("%d%d",&src,&dest);
                insertEdge(src,dest);
            }else if(choice == 3){
                printf("\n Enter value of vertex : ");
                scanf("%d",&val);
                delete(val);
            }else if(choice == 4) break;
            else {
                printf("\n Invalid choice!");
            }
       }
       printGraph();
    }
    
    void main(){
        adjacentList();
    }
  