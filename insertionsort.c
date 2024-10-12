#include <stdio.h>
int main()
{
    int n,k;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    int a[n];
    int min=-999;
    for(int i=0;i<n;i++)
    {
        printf("enter the %d th element:\n",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j]&&a[j]<min)
            {   
                min=a[j];
                a[i]=a[j];
                j=k;
                a[j]=a[k];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}