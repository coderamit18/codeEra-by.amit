#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
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
            printf("\
Invalid src and dest!");
        }
    }
    
    void createGraph(){
        for(int i = 0; i < SIZE;i++){
            insert(i);
        } 
        insertEdge(0,1);
        insertEdge(0,2);
    
        insertEdge(1,2);
        insertEdge(1,3);
    
        insertEdge(2,4);
    
        insertEdge(3,4);
        insertEdge(3,5);
    
        insertEdge(4,5);
    
        insertEdge(5,6);
    }
    
   
    
    void createGraph(){
        for(int i = 0; i < SIZE;i++){
            insert(i);
        } 
        insertEdge(0,1);
        insertEdge(0,2);
    
        insertEdge(1,2);
        insertEdge(1,3);
    
        insertEdge(2,4);
    
        insertEdge(3,4);
        insertEdge(3,5);
    
        insertEdge(4,5);
    
        insertEdge(5,6);
    }
    
    void DFSUtil(int src,int vis[]){
        if(vis[src] == 0){
            printf("%d ",src);
        }
        vis[src] = 1;
        // visiting neighur
         struct Vertex *node = getNode(src);
         struct Edge *j = node->edge;
          while(j != NULL && j->data != src){
            DFSUtil(j->data,vis);
            j = j->next;
        }
    }
    void DFS(){
         int vis[SIZE];
        for(int i = 0;i < SIZE;i++) vis[i] = 0;
        for(int i = 0;i < SIZE;i++) {
            if(vis[i] == 0){
                DFSUtil(i,vis);
            }
         }
    }
    void main(){
        createGraph();
        DFS();
    }
  
    // OUTPUT 👇

    //  0 1 2 4 5 6 