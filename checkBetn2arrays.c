#include <stdio.h>
int main()
{
    int i;
    int first[5] = {1, 2,8, 3, 45};
    int second[8] = {2,1, 45, 3456,234,56,757,8};
    // int third[4]={1,2,234,45};
    printf("The same elements are listed below:\n");
    int j;
    // int i;                                   for loop ke andar agar dusra for loop lete hai to phir uske variable ko define karna padta hai bahar.
    for (i = 0; i < 5; i++){
        for (j=0;j<8;j++){
            if(first[i]==second[j]){
                
                    printf("%d\n",first[i]);
            }
        }
    }
    return 0;

}
