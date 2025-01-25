#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
struct queue
{
    int size;
    int front;
    int rear;
    int * arr2;
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
void enqueue(struct queue* ptr,int val)
{
    if(ptr->rear>=ptr->size)
    {
        printf("queue overflow.\n");
    }
    else
    {
        ptr->rear++;
        ptr->arr2[ptr->rear]=val;
    }
}
int dequeue(struct queue* ptr)
{
    if(ptr->front==ptr->rear)
    {
        printf("queue underflow.\n");
        return 0;
    }
    else
    {
        ptr->front++;
        int val=ptr->arr2[ptr->front];
        return val;
    }
}
struct queue* reversaltok(struct queue* ptr,int k)
{
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->size=199;
    s->top=-1;
    s->arr=(int *)malloc(sizeof(int));
    struct queue* q=(struct queue*)malloc(sizeof(struct queue));
    q->size=100;
    q->front=-1;
    q->rear=-1;
    q->arr2=(int *)malloc(q->size*sizeof(int));
    for(int i=0;i<k;i++)
    {
        int a=dequeue(ptr);
        push(s,a);
    }
    for(int i=0;i<k;i++)
    {
        int a=pop(s);
        enqueue(q,a);
    }
    while(ptr->front!=ptr->rear)
    {
        int d=dequeue(ptr);
        enqueue(q,d);
    }
    return q;
}
int main()
{
    struct queue* q=(struct queue*)malloc(sizeof(struct queue));
    q->size=100;
    q->front=-1;
    q->rear=-1;
    q->arr2=(int *)malloc(q->size*sizeof(int));
    int n;
    printf("enter the number of element to enqueue:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int val;
        printf("enter the value to insert:\n");
        scanf("%d",&val);
        enqueue(q,val);
    }

    int k;
    printf("enter the number of element to reverse:\n");
    scanf("%d",&k);
    struct queue* q2=(struct queue*)malloc(sizeof(struct queue));
    q2->size=100;
    q2->front=-1;
    q2->rear=-1;
    q2->arr2=(int *)malloc(q2->size*sizeof(int)); 
    q2=reversaltok(q,k);
    for(int i=0;i<n;i++)
    {
    printf("element is:%d\n",dequeue(q2));
    }
    return 0;
}