#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in array:\n");
    scanf("%d",&n);
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        printf("enter the %d th element :\n",i);
        scanf("%d",&arr[i]);
    }
    int inp;
    printf("enter the input from where you have to reverse:\n");
    scanf("%d",&inp);

    for(int i=inp;i<=size/2;i++)
    {
        int temp=arr[size-i-1];
        arr[size-i-1]=arr[i];
        arr[i]=temp;
    }

    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;

}