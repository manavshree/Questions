#include <stdio.h>
int main()
{
    int given_number;
    printf("enter the number of rows:\n");
    scanf("%d",&given_number);
    for(int row=0;row<2*given_number;row++)
    {
        int totalcols=row>given_number?2*given_number-row:row;
        for(int column=0;column<totalcols;column++)
        {
            printf("*",column);

        }
        printf("\n");
    }
    return 0;
}