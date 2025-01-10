#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};
void push(struct stack * ptr,int val)
{
    if(ptr->top>=ptr->size)
    {
        printf("stack overflow.\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int  pop(struct stack* ptr)
{
    if(ptr->top<=-1)
    {
        printf("stack underflow\n");
        return 0;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int check(int n)
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->size=99000000;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    int count=0;
    for(int i=1;i<9;i++)
    {
        push(s,i);
        count++;
        while(s->top != -1)
        {
            // Pop an item from the stack
            int a=pop(s);
            // count--;
            // Generate its possible combinations
            for(int i=a%10;i<=9;i++)
            {
                int j=a*10+i;
                if(j<=n)
                {
                    push(s,j);
                    count++;
                } 
            }
            // Push all values less than n
        }
    }
    return count;
}
int main()
{
    
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    int c=check(n);
    printf("Total Count is:%d\n",c);

    return 0;
}