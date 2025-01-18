#include <stdio.h>
void duplicate(int arr[],int n)
{
    int m=n;
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<=m;k++)
                {
                    arr[k]=arr[k+1];
                }
                n=n-1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("element is:%d\n",arr[i]);
        
    }
}
int main()
{
    int n;
    printf("Enter the number of elements in an array:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the value for %d element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("element is:%d\n",arr[i]);
        
    }
    printf("new array is:\n");
    duplicate(arr,n);

    return 0;
}