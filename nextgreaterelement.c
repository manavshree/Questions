#include <stdio.h>
int findDuplicate(int* nums, int numsSize)
{
    int i=numsSize;
    int s=-1;
    int a=0;
    for(int j=0;j<i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(nums[j]==nums[k])
            {
                s=nums[k];
                printf("%d\n",a);
                break;
            }
            else 
            {
                s=-1;
            }
                a++;
        }
    }
    return s;
}
    
int main()
{

    int arr[5]={3,1,4,4,2};
    int k=findDuplicate(arr,5);
    printf("%d",k);
    return 0;
}