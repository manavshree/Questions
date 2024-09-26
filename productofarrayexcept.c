#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];

    for(int i=0;i<n;i++)
    {
        printf("enter the value at %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("element is:%d\n",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int prod=1;
        for(int j=0;j<n;j++)
        {
            if(j==i)
            {
                continue;
            }
            else
            {
                prod=prod*arr[j];
            }
        }
        arr2[i]=prod;
    }
    for(int i=0;i<n;i++)
    {
        printf("element is:%d\n",arr2[i]);
    } 
    return 0;
}