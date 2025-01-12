#include <stdio.h>
int func1(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        return x*func2(x);
    }
}
int func2(int x)
{
    return func1(x-1);
}
int main()
{
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    printf("%d",func1(n));
    
    return 0;
}