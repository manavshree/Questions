#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    int array[n];
    int temp;
    for(int i=0;i<n;i++)
    {
        printf("enter the %d th element:\n",i);
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(array[i]<array[j])
            {
                
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}