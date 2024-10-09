#include <stdio.h>
int main()
{
    int k=0;
    int array1[]={51,50,510,27,54,34,45,5,23,90,11,24,58};
    int array2[]={};
    for (int i = 0; i <sizeof(array1)/sizeof(int); i++)
    {
        if(array1[i]<50)
        {
            int j=-1;
            printf("%d\t",array1[i]);
    }
// for (int i = 0; i <= k; i++)
// {
//     printf("%d\t",array2[i]);
// }
    return 0;
}