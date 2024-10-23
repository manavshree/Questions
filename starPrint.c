#include <stdio.h>
int i,j;
int first[8]={1,2,3,4,5,11,12,13};
int second[8]={6,7,8,9,0,1,2,3};
void append(int n){
    for(i=0;i<8;i++){
        printf("%d\n",first[i]);
        
    }
    
}
void appenda(int n){
    printf("\n");
    for(j=0;j<8;j++){
        printf("%d\n",second[j]);
        
    }
}
int main()
{ 
    for(int  i=0;i<8;i++){
        append(i);
        appenda(i);
    }
    return 0;
}