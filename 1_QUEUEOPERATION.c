#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int rear;
    int front;
    int * arr;
};
void enqueue(struct queue* ptr,int val)
{
    if(ptr->rear==ptr->size-1)
    {
        printf("queue overflow.\n");
    }
    else
    {
        ptr->rear++;
        ptr->arr[ptr->rear]=val;
    }
}
int dequeue(struct queue* ptr)
{
    if(ptr->rear==ptr->front)
    {
        printf("queue underflow.\n");
        return 0;
    }
    else
    {
        ptr->front++;
        int val=ptr->arr[ptr->front];
        printf("value is:%d\n",val);
        return val;
    }
}
int main()
{
    struct queue* q=(struct queue*)malloc(sizeof(struct queue));
    q->size=100;
    q->rear=-1;
    q->front=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    int n;
    printf("enter the number of element you want to insert:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the value to insert  at ->%d position:",i+1);
        int val;
        scanf("%d",&val);
        enqueue(q,val);
    }
    for(int i=0;i<n;i++)
    {
    int v=dequeue(q);
    }

    return 0;
}