#include <stdio.h>
char split(char a[100],int index){
    char send[100];
    int m=0;
    for (int i = 0; i < index; i++)
    {
        send[m]=a[i]; 
        m++;
    }
    return send;
    
}//79188     37027      20371      60519
int main(){
    printf("Enter a string : ");
    char str[100];
    gets(str);
    int idx;
    printf("Enter a index : ");
    scanf("%d",&idx);

    printf("%s",split(str,idx));

    

    return 0;
}   