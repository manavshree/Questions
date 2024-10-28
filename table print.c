#include <stdio.h>
// int main()
// {
//     int num;
//     printf("give the number you want to give for table:\n");
//     scanf("%d",&num);
//     printf("%d into 1 is: %d\n",num,num*1);
//     printf("%d into 2 is: %d\n",num,num*2);
//     printf("%d into 3 is: %d\n",num,num*3);
//     printf("%d into 4 is: %d\n",num,num*4);
//     printf("%d into 5 is: %d\n",num,num*5);
//     printf("%d into 6 is: %d\n",num,num*6);
//     printf("%d into 7 is: %d\n",num,num*7);
//     printf("%d into 8 is: %d\n",num,num*8);
//     printf("%d into 9 is: %d\n",num,num*9);
//     printf("%d into 10 is: %d\n",num,num*10);
//     return 0;
// }



int main()
{
    int num,index=0;
    printf("enter the number you want for table:");
    scanf("%d/n",&num);
    do
    {
        index=index+1;
        printf("%d X %d =%d\n ",num,index,num*index);
    } while (index<10);
    

    return 0;
}
