#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
void push(struct stack * ptr,int val)
{
    if(ptr->top==ptr->size-1)
    {
        printf("stack overflow.\n");
    }
    else
    {
        ptr->arr[++ptr->top]=val;
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
        int val=ptr->arr[ptr->top--];
        return val;
    }
}
void fibonacci(int n)
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->size=100;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    push(s,0);
    push(s,1);
    int d=n,total=0;
    while(n-2>0)
    {
        int b=pop(s);
        int a=pop(s);
        int c=a+b;
        push(s,a);
        push(s,b);
        push(s,c);
        n--;
    }
    for (int i = 0 ; i < d ; i++){

        printf("%d\n",s->arr[i]);
    }
    for (int i = 0 ; i < d ; i++){

        total+=s->arr[i];
    }
    printf("The Sum of Total digit is:%d",total);
}
int main()
{
    int n;
    printf("enter the number of sequence you want:\n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}