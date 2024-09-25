#include <stdio.h>
int main()
{
    int arr[]={2,1,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<=size-1;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}