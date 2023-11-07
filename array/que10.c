#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    //Taking inputs
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&arr[i]);
    }

    //sum of all element
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum of all element is : %d",sum);
      
    return 0;
}
//OUTPUT : 

// Enter the number of elements : 5
// Enter 1 element :4
// Enter 2 element :2
// Enter 3 element :1
// Enter 4 element :6
// Enter 5 element :7
// The sum of all element is : 20