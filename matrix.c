#include <stdio.h>
int main()
{
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
        printf("%d",1);
        printf("\t");
        printf("%d",i);
        printf("%d",2);
        printf("\t");
        printf("%d",i);
        printf("%d",3);
        printf("\n");
    }
    
    return 0;
}