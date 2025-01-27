#include<stdio.h>
#include<stdbool.h>
#include <math.h>
bool isPalindrome(int x)
{
    int digit=0;
    int temp=x;
    int temp2=x;
    int count=0;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    if(count==1)
    {
        return true;
    }
    else if(x<0 || x%10==0&& x!=0)
    {
        return false;
    }
    else
    {
        count--;
        int k=temp2;
        while(k>0)
        {
            temp2=k;
            temp2=temp2%10;
            digit+=temp2*pow(10,count);
            count--;
            k=k/10;
        }
    }
    if(digit==x)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int x;
    printf("enter the value of x:\n");
    scanf("%d",&x);
    if(isPalindrome(x))
    {
        printf("palindrome.\n");
    }
    else
    {
        printf("not palindrome.");
    }
}