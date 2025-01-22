#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top1;
    int top2;
    int *arr;
};
void push1(struct stack* ptr,int val)
{
    if(ptr->top1>=(ptr->size)/2)
    {
        printf("stack overflow\n");
        return;
    }
    else
    {
        ptr->top1++;
        ptr->arr[ptr->top1]=val;
    }
}
void push2(struct stack* ptr,int val)
{
    if (ptr->top2>=ptr->size)
    {
        printf("stack overflow\n");
        return;
    }
    else
    {
        ptr->arr[++ptr->top2]=val;
    }
}
// int peek1(struct stack* ptr,int i)
// {
//     if(ptr->top1-i+1<0)
//     {
//         printf("INVALID POSITION AFTER THIS....\n");
//         return -1 ;
//     }
//     else
//     {
//         return ptr->arr[ptr->top1-i+1];
//     }
// }
int pop1(struct stack* ptr)
{
   if (ptr->top1<-1)
    {
        printf("stack underflow.\n");
        return -1;
    }
    
    else
    {
        int val=ptr->arr[ptr->top1];
        ptr->top1--;
        printf("Val popped from 1st part = %d\n", val);
        return val;
    }
}
int pop2(struct stack* ptr)
{
    if (ptr->top2<((ptr->size)/2)-1)
    {
        printf("stack underflow\n");
        return -1;
    }
    
    else
    {
        int val=ptr->arr[ptr->top2];
        ptr->top2--;
        printf("Val popped from 2nd part = %d\n", val);
        return val;
    }
}
int main()
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    printf("enter the size of stack:\n");
    scanf("%d",&s->size);
    s->arr=(int *)malloc(s->size*sizeof(int ));
    s->top1=-1;
    s->top2=((s->size)/2)-1;
    push1(s,12);
    push1(s,20);
    push1(s,30);
    push2(s,5);
    push2(s,10);
    push2(s,15);
    pop1(s);
    pop1(s);
    pop1(s);
    pop2(s);
    pop2(s);
    pop2(s);
    // printf("the poped elememnt is:%d\n",pop2(s));
    return 0;
}