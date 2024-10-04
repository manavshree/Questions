#include <stdio.h>
int fibo(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else 
    {
        return (fibo(n-1)+fibo(n-2));
    }
}
int main()
{
    int j,sum=0;
    printf("enter the number for finonacci:\n");
    scanf("%d",&j);
    for (int i=0;i<j;i++)
    {
        int x;
        x=fibo(i);
        sum+=x;
        printf("%d\n",x);
    }
    printf("the sum of fibbonacci is %d\n",sum);
    return 0;
}