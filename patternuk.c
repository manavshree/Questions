#include <stdio.h>
int main()
{
    int r,c;
    printf("enter the number of row:\n");
    scanf("%d",&r);
    printf("enter the number of column:\n");
    scanf("%d",&c);
    for(int i=0;i<r;i++)
    {
        for(int j=((c-1)/2);j-i>=0;j--)
        {
            printf(" ");
        }
        int s=(2*i)+1;
        for(int k=s;k>0;k--)
        {
            printf("*");
        }
        for(int j=((c-1)/2);j-i>=0;j--)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}