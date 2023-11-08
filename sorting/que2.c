#include <stdio.h>
void selection(int arr[], int beg, int size)
{
    if (beg >= size - 1)
    {
        return;
    }
    int minidex = beg;
    for (int i = beg; i < size; i++)
    {
        if (arr[i] < arr[minidex])
        {
            minidex = i;
        }
    }
    int temp = arr[minidex];
    arr[minidex] = arr[beg];
    arr[beg] = temp;
    selection(arr,beg+1,size);
}
int main()
{
    int arr[4] = {21, 13, 33, 1};

    printf("sorted array :  ");
    selection(arr, 0,4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}