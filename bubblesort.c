#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of element:\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int counter=1;
    while(counter <n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    printf("sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}