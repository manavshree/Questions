#include<stdio.h>
#include<stdlib.h>

int deletion(int arr[], int n , int position)
{
    for(int i=position-1; i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    return n;
}

int main()
{
    int arr[9]={1,8,7,8,8,5,12,2,7};
    int n =sizeof(arr)/sizeof(int);
    int position=0;
    printf("Enter the position:");
    scanf("%d", &position);
    int m;
    m=deletion(arr,n,position);
    // n--;
    // printf("%d", n);
    for(int i=0;i<m;i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}