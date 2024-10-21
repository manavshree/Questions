#include <stdio.h>
int main()
{
    int n ;
    printf("enter the number of rows:\n");
    scanf("%d",&n);
    for(int row=0;row<2*n;row++)
    {
        int noofcols=row>n?2*n-row:row;
        int noofspace=n-noofcols;
        for (int s = 0; s < noofspace; s++)
        {
            printf(" ");
        }
        
        for(int col=0;col<noofcols;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}