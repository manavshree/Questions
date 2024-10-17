#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int l=1;l<=i;l++)
        {
            printf("*",l);
        }
        printf("\n");
    }
    return 0;
}