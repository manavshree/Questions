#include <stdio.h>
void sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    return -1;
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t ",arr[i]);
    }
}
int deleteElement(int arr[], int n, int key)
{
    // Find position of element to be deleted
    int pos = findElement(arr, n, key);
 
    if (pos == -1) {
        printf("Element not found");
        return n;
    }
 
    // Deleting element
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1;
}
int main()
{
    int size;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("enter %d element of array:\n",i+1);
        scanf("%d",&arr[i]);
    }
    // printarray(arr,size);
    // printf("\n");
    sort(arr,size);
    // printf("\n");
    // printarray(arr,size);
    int i=0;
    while(i<=size)
    {
        if(arr[i]==arr[i+1])
        {
            printf("%d\t",arr[i]);
            size=deleteElement(arr,size,arr[i]);
        }
        i++;
    }
    // printarray(arr,size);
    return 0;
}
