#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int top;
    int size;
    char *arr;
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
char pop(struct stack* ptr)
{
    if(ptr->top<=-1)
    {
        printf("stack underflow.\n");
        // break;
        return '\0';
    }
    else
    {
        char a=ptr->arr[ptr->top];
        ptr->top--;
        return a;
    }
}
int main()
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->size=200;
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));
    char a[]="({[))]})";
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='('||a[i]=='{'||a[i]=='[')
        {
        push(s,a[i]);
        }
        else
        {
            continue;
        }
    }
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==')'||a[i]=='}'||a[i]==']')
        {
            pop(s);
        }
    }
    if(strlen(a)%2==0)
    {
        printf("paranthesis matching");
    }
    else if(strlen(a)%2!=0)
    {
        printf("paranthesis are not matching.");
    }
    else if(s->top<=-1)
    {
        printf("paranthesis are matching.\n");
    }
    else
    {
        printf("paranthesis are not matching.\n");
    }

    return 0;
}