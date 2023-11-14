#include <stdio.h>
#include <conio.h>
#include <stdio.h>


    int findElem(int elem,int n,int arr[]){
        for(int i = 0;i < n;i++){
            if(arr[i] == elem) return 1;
        }
        return 0;
    }
    
    void adjacentMatrix(){
        int n = 5;
        int vertex[n];
        int matrix[n][n];
        for(int i = 0;i < n;i++){
             for(int j = 0;j < n;j++){
                matrix[i][j] = 0;
            }
        }
        int indx = 0,choice,src,dest;
        while(indx < n){
            printf("\n----Select Choice----\n 1.Insert vertex\n 2.Insert edge\n 3.Exit\n");
            scanf("%d",&choice);
            if(choice == 1){
                printf("\nEnter value of vertex : ");
                scanf("%d",&vertex[indx]);
                indx++;
            }else if(choice == 2){
                printf("\nEnter src and destination vertex respectively : ");
                scanf("%d%d",&src,&dest);
                int isSrc = findElem(src,n,vertex);
                int isDest = findElem(dest,n,vertex);
                if(src >= n || dest >= n || src < 0 || dest < 0 || isSrc == 0 || isDest == 0){
                    printf("\n Invalid path!");
                }else {
                    matrix[src][dest] = 1;
                    matrix[dest][src] = 1;
                }
            }else if(choice == 3){
                break;
            }
            else {
                printf("\nInvalid choice!");
            }
        }
        // print matrix
      for(int i = 0;i < n;i++){
             for(int j = 0;j < n;j++){
                printf("%d ",matrix[i][j]);
            }
            printf("\n");
        }
    }
    
    void main(){
        adjacentMatrix();
    }
    // output
    //  ----Select Choice----
    //  1.Insert vertex
    //  2.Insert edge
    //  3.Exit
    // 1

    // Enter value of vertex : 12

    // ----Select Choice----
    //  1.Insert vertex
    //  2.Insert edge
    //  3.Exit
    // 1

    // Enter value of vertex : 23
