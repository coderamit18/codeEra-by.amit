#include <stdio.h>
void bubblesort(int arr[], int end)
{
    if (end == 0)
    {
        return;
    }
    for (int i = 0; i < end; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubblesort(arr,end-1);
}
int main()
{
    int arr[4] = {12, 3, 33, 1};
    
    printf("sorted array :  ");
    bubblesort(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d \t",arr[i]);
    }
    
    return 0;
}
// OUTPUT : 
/*
sorted array :  1       3       12      33 
*/