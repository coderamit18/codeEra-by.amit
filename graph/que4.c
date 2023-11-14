#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    void DFSUtil(int src,int vis[]){
        if(vis[src] == 0){
            printf("%d ",src);
           vis[src] = 1;
          // visiting neghbours
        for(int dest = 0;dest < SIZE;dest++){
            if(src != dest && vis[dest] == 0 && matrix[src][dest] == 1){
            DFSUtil(dest,vis);
            }
        }
    }
    }
    
    void DFS(){
        int visited[SIZE];
        for(int i = 0;i < SIZE;i++) visited[i] = 0;
        for(int i = 0;i < SIZE;i++){
            if(visited[i] == 0) {
                DFSUtil(i,visited);
            }
        }
    }
    
    
    
    void main(){
        createGraph();
        printf("BFS : ");
        BFS();
        printf("\n DFS : ");
        DFS();
    }
  
    // output 

    // BFS : 0 1 2 3 4 5 6 
    // DFS : 0 1 2 4 5 6 3 
  