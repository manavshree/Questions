#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of items in an array:\n");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("enter the %d th element\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("input of array is done .\n");
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        int temp=a[min];
        a[min]=a[j];
        a[i]=temp;
        }
    }
    
    printf("\nyour sorted array is :\n");
    for (int i= 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    
    return 0;
}