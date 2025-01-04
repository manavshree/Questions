#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
void push(struct stack* ptr,int val)
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
int pop(struct stack* ptr)
{
    if(ptr->top<=-1)
    {
        printf("stack underflow.\n");
        return 0;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
void peek(struct stack* ptr)
{
    while(ptr->top!=-1)
    {
        printf("%d\n",ptr->arr[ptr->top]);
        ptr->top--;
    }
}
struct stack* halfreversal(struct stack* ptr)
{
    struct stack*aux1=(struct stack*)malloc(sizeof(struct stack));
    aux1->top=-1;
    aux1->size=100;
    aux1->arr=(int *)malloc(aux1->size*sizeof(int));    

    struct stack* aux2=(struct stack*)malloc(sizeof(struct stack));
    aux2->top=-1;
    aux2->size=100;
    aux2->arr=(int *)malloc(aux2->size*sizeof(int));
    int a=(ptr->top+1)/2;
    for(int i=0;i<a;i++)
    {
        int val=pop(ptr);
        push(aux1,val);
    }
    while(ptr->top!=-1)
    {
        int val2=pop(ptr);
        push(aux2,val2);
    }
    for(int i=0;i<a;i++)
    {
        int val=pop(aux1);
        push(aux2,val);
    }
    return aux2;
}
struct stack* halfreversalinsame(struct stack* ptr)
{
    struct stack*aux1=(struct stack*)malloc(sizeof(struct stack));
    aux1->top=-1;
    aux1->size=100;
    aux1->arr=(int *)malloc(aux1->size*sizeof(int));    

    struct stack* aux2=(struct stack*)malloc(sizeof(struct stack));
    aux2->top=-1;
    aux2->size=100;
    aux2->arr=(int *)malloc(aux2->size*sizeof(int));

    struct stack* aux3=(struct stack*)malloc(sizeof(struct stack));
    aux3->top=-1;
    aux3->size=100;
    aux3->arr=(int *)malloc(aux3->size*sizeof(int));

    int a=(ptr->top+1)/2;;
    for(int i=0;i<a;i++)
    {
        int val=pop(ptr);
        push(aux1,val);
    }
    int count=0;
    while(ptr->top!=-1)
    {
        int val2=pop(ptr);
        push(aux2,val2);
        count++;
    }
    for(int i=0;i<count;i++)
    {
        int val=pop(aux2);
        push(aux3,val);
    }
    for(int i=0;i<count;i++)
    {
        int val=pop(aux3);
        push(ptr,val);
    }
    
    for(int i=0;i<a;i++)
    {
        int val=pop(aux1);
        push(ptr,val);
    }
    return ptr;
}
int main()
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=100;
    s->arr=(int *)malloc(sizeof(int)*s->size);
    printf("enter how many number you want to insert:\n");
    int n,val;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the value:\n");
        scanf("%d",&val);
        push(s,val);
    }
    s=halfreversalinsame(s);
    printf("after half reversal in same stack is:\n");
    peek(s);


    return 0;
}