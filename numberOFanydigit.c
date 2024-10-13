#include <stdio.h>
int maan[8]={1,1,1,2,2,3,3,3};
int main()
{
    int i;
    int a=0;
    int b=0;
    int c=0;
  for ( i = 0; i < 8; i++)
  {
    if(maan[i]==1){
        a=a+1;
    }
        else if(maan[i]==2){
        b=b+1;
    }
        else if(maan[i]==3){
        c=c+1;
    }
  }
    printf("the number of ones are:%d\n",a);
    printf("the number of twos are:%d\n",b);
    printf("the number of threes are:%d\n",c);

    return 0;
}