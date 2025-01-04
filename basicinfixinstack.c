#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char * arr;
};
struct compute
{
    int size;
    int top;
    int * arr;
};
void push(struct stack * ptr,char val)
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
char pop(struct stack* ptr)
{
    if(ptr->top<=-1)
    {
        printf("stack underflow.\n");
        return '\0';
    }
    else
    {
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int calc(int a,char b,int c)
{
    if(b=='+')
    {
        return (a+c);
    }
    else if(b=='-')
    {
        return (a-c);
    }
    else if(b=='*')
    {
        return(a*c);
    }
    else if(b=='/')
    {
        return(a/c);
    }
}
void calculate(struct stack* ptr,int len)
{
    struct compute* s1=(struct compute* )malloc(sizeof(struct compute));
    s1->top=-1;
    s1->size=100;
    s1->arr=(int *)malloc(s1->size*sizeof(int ));



    int total=0;

    for(int i=0;i<len;i++)
    {
    int a=pop(ptr)-'0';
    char b=pop(ptr);
    int k=pop(ptr)-'0';
    total=calc(a,b,k)+'0';
    push(ptr,total);
    }
    printf("\nfinal calculation from right to left is:%d\n",total-'0');
}
int main()
{
    struct stack* s=(struct stack* )malloc(sizeof(struct stack));
    s->top=-1;
    s->size=100;
    s->arr=(char *)malloc(s->size*sizeof(char ));
    char array[]="2*7*9*8";
    int len=strlen(array)/2;
    for(int i=0;array[i]!='\0';i++)
    {
        push(s,array[i]);
    }
    calculate(s,len);
    return 0;
}