#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int r;
    int f;
    int *arr;
};
int isfull(struct queue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}
int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        printf("queue overflow.\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue underflow.\n");
        return -1;
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        int val = q->arr[q->f];
        return val;
    }
}
int main()
{
    struct queue q;
    q.size = 4;
    q.r = q.f = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 12);
    enqueue(&q, 12);
    enqueue(&q, 12);
    // one space is reserved for the first element......i.e for front and end at 0;
    printf("queue is empty:%d\n", isempty(&q));
    printf("queue is full :%d\n", isfull(&q));

    printf("value is:%d\n", dequeue(&q));
    printf("value is:%d\n", dequeue(&q));
    printf("value is:%d\n", dequeue(&q));

    printf("queue is empty:%d\n", isempty(&q));
    printf("queue is full :%d\n", isfull(&q));
    return 0;
}
