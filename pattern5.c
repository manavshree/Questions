#include <stdio.h>
int main()
{
    int given_number;
    printf("enter the number of rows:\n");
    scanf("%d",&given_number);
    for(int row=0;row<2*given_number;row++)
    {
        int numspace=0;
        int k=numspace>row?given_number-row:given_number-row;
        for (int i = 0; i < k; i++)
        {
            printf(" ");
        }
        
        int totalcols=row>given_number?2*given_number-row:row;
        for(int column=0;column<totalcols;column++)
        {
            printf("*",column);

        }
        printf("\n");
    }
    return 0;
}