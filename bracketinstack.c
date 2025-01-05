#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack{
    int size;
    int top;
    char* arr;
};
void push(struct stack* ptr,char a)
{
    if(ptr->top>=ptr->size)
    {
        printf("stack overflow.\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=a;

    }
}
char pop(struct stack * ptr)
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
int main()
{
    struct stack * s=(struct stack *)malloc(sizeof(struct stack));
    s->size=100;
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));;

    char a[] = "({[()]})[{()}]()()}}";
    char c ;
    for (int i = 0 ; a[i] != '\0'; i++){
        c = a[i];
        if (c == '{' || c == '[' || c == '('){
            push(s,c);
        }
        else
        {
            char ch=pop(s);
            if (ch == '\0') {
                printf("Extra closing parentheses present\n");
                return;
            }
            if((c==')' && ch != '(') || (c=='}' && ch != '{') || (c==']' && ch != '['))
            {
                printf("The string has incorrect parentheses\n");
                break;
            }
        }
    }
    if (s->top != -1) {
        printf("Incorrect parentheses\n");
    }
    else{
        printf("Correct Parantheses\n");
        }
    return 0;
}