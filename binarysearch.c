#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("enter the values in ascending order :\n");
    int a[50],n,key,low,high;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("enter the values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key:\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(key==a[mid])
        {
            printf("found at index:%d and value is:%d",mid,a[mid]);
            exit(0);
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("not found your input:(");
    return 0;
}