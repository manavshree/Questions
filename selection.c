#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d\t",arr[i]);
}
int main()
{
    int n;
    clock_t st,et;
    double tt;
    printf("Enter the number of input:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=rand();
    }
    printf("before sorting:\n");
    printarray(arr,n);
    st=clock();
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        if(i!=min)
        {
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    et=clock();
    printf("\nAfter sorting:\n");
    printarray(arr,n);
    tt=(double)et-st/CLOCKS_PER_SEC;
    printf("\ntime taken:%e",tt);
    return 0;
}