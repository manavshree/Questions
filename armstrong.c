#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int num=0,k=0;
    int sum=0;
    int temp;
    int b;
  
    printf("enter the number to check it is armstrong or not :\n");
    scanf("%d",&a);
    temp=a;
    b=a;
    while(b>0)
    {
        num+=1;
        b=b/10;
    }
    while(temp>0)
    {
        int p;
        k=temp%10;
        printf("%d\n",k);
        p=pow(k,num);
        sum+=p;
        // printf("%d\n",sum);
        temp=temp/10;
    }
    printf("number of digit is %d\n",num);
    printf("number is %d\n",sum);
    if (sum==a)
    {
        printf("yes its an armstrong number.\n");
    }
    else
    {
        printf("its not an armstrong number.\n");
    }

    return 0;
}