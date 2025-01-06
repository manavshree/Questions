#include <stdio.h>
int main()
{
    int arr[200]={1,2,3,4,5};
    int pos,value,size;
    size=5;
    printf("enter the position :\n");
    scanf("%d",&pos);
    printf("enter the value :\n");
    scanf("%d",&value);
    for(int i=size-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    size+=1;
    arr[pos]=value;
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    // printf("\n");
    return 0;
}