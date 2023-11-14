#include <stdio.h>
#include <conio.h>
#include <stdio.h>
    #include <stdlib.h>
    //Queue
struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL,*rear = NULL;
int Qsize = 0;
int isEmpty(){
    if(Qsize == 0){
        return 1;
    }
    return 0;
}
void add(int val){
    if(rear == NULL){
        rear = (struct Node*)malloc((sizeof(struct Node)));
        rear->data = val;
        rear->next = NULL;
        front = rear;
        Qsize++;
        return;
    }
    struct Node *temp = (struct Node*)malloc((sizeof(struct Node)));
    if(temp == NULL){
        printf("Queue if FULL!");
        return;
    }
    temp->data = val;
    temp->next = NULL;
    rear->next = temp;
    rear = temp;
    Qsize++;
}

int remove1(){
    if(Qsize == 0){
        printf("Queue is Empty!");
        return -1;
    }
    int val = front->data;
    struct Node *temp = front;
    front = front->next;
    free(temp);
    Qsize--;
    return val;
}

int peek(){
    if(front == NULL){
        printf("Queue is Empty!");
        return -1;
    }
    return front->data; 
}
    void createGraph(){
        matrix[0][1] = 1;
        matrix[0][2] = 1;
    
        matrix[1][3] = 1;
        matrix[1][2] = 1;
    
        matrix[2][4] = 1;
    
        matrix[3][4] = 1;
        matrix[3][5] = 1;
    
        matrix[4][5] = 1;
    
        matrix[5][6] = 1;
    }
    void BFS(){
        // entring first vertex
        for(int i = 0;i < SIZE;i++){
             for(int j = 0;j < SIZE;j++){
                if(matrix[i][j] != 0) {
                    add(i);
                    break;
                }
            }
        }
        // visited array;
        int visited[SIZE];
        for(int i = 0;i < SIZE;i++) visited[i] = 0;
        while(isEmpty() == 0){
            int cur = remove1();
            if(visited[cur] == 0) printf("%d ",cur);
            visited[cur] = 1;
            for(int j = 0;j < SIZE;j++){
                if(cur != j && matrix[cur][j] != 0 && visited[j] == 0){
                    add(j);
                }
            }
        }
    }
    
    void main(){
        createGraph();
        BFS();
    }

    // OUTPUT 

    // 0 1 2 3 4 5 6 
  