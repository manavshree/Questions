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
    int max=-999;
    int secondmax = array[0];
    
    for (j=0;j<n;j++)
    {
        if (array[j]>max)
        {
            // int temp;
            secondmax = max;
            max=array[j];
            // temp=j;
        }
    }
    printf("the maximum value is %d\n",max);
    
    // int temp=-999;

    // for (int i=0;i<n;i++)
    // {
    //     if (array[i]<max && array[i]>temp)
    //     {
    //         temp=array[i];

    //     }
    // }
    printf("the second largest is %d",secondmax);
    return 0;
}