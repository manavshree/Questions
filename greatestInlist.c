#include <stdio.h>
int main()
{int i;
int a=-999;
    int mana[4]={1,2,3,82};                 
    for(i=0;i<4;i++){                          
        if(mana[i]>a){
            a=mana[i];
        }
        
    }
printf("the largest number in array is:%d",a);
    return 0;
}