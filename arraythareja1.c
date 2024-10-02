#include <stdio.h>
int main()
{
    int n,j;
    printf("enter the number of elements in an array:\n");
    scanf("%d",&n);
    int array[n];
    printf("enter the values for array:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("array input is done.\n");
    int min=999;
    int temp;

    for (j=0;j<n;j++)
    {
        if (array[j]<min)
        {
            // int temp;
            min=array[j];
            temp=j;
        }
    }
    printf("the minimum value is %d\n",min);
    printf("the position of min is :%d",temp+1);

    return 0;
}