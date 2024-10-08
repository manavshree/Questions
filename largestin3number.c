#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d is largest",a);
        }
        else
        {
            printf("%d is largest",c);
        }
    }
    else if (b>a)
    {
        if (b>c)
        {
            printf("b is greater than all.");
        }
        else
        {
            printf("c is greater than all");
        }
        
    }
    
    return 0;
}