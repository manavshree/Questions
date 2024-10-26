#include <stdio.h>
int main()
{
    int n,arr[5];
    printf("enter the size of array\n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}