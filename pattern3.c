#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c",49+j);
        }
        printf("\n");
    }
    return 0;
}