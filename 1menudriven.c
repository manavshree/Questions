#include <stdio.h>
int main()
{
    char choose;
    printf("1.kms to meters\n 2.pounds to kg\n 3.litre to mili litre\n 4.q to quit.\n");
    scanf("%c",&choose);
    int a,b;
    switch (choose)
    {
    case '1':
        printf("enter your number for kms to meters: ");
        scanf("%d",&a);
        int second =a*1000;
        printf("%d km is %d meters.",a,second);
        break;
    case '2':
    printf("enter your number for pounds to kgs:");
    scanf("%d",&b);
    float pounds=b*0.453592 ;
    printf("%d pounds is %f kgs.",b,pounds);
    break;
    case 'q':
    printf("quitting the loop.");
    break;
    
    default:
        break;
    }
    return 0;
}
