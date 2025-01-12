// ---------------1>STACK USING ARRAY----------------
// #include <stdio.h>
// #include <stdlib.h>
// struct stack
// {
//     int top;
//     int size;
//     int *arr;
// };
// void push(struct stack * ptr,int val)
// {
//     if(ptr->top>ptr->size)
//     {
//         printf("stack overflow.\n");
//     }
//     else
//     {
//         ptr->top++;
//         ptr->arr[ptr->top]=val;
//     }
// }
// int pop(struct stack* ptr)
// {
//     if(ptr->top<=-1)
//     {
//         printf("stack underflow.\n");
//     }
//     else
//     {
//         int val=ptr->arr[ptr->top];
//         ptr->top--;
//     }
// }
// void peek(struct stack* ptr)
// {
//     int d=ptr->top;
//     while(d!=-1)
//     {
//         printf("%d\t",ptr->arr[d]);
//         d--;
//     }
// }
// int main()
// {
//     struct stack* ptr=(struct stack*)malloc(sizeof(struct stack));
//     ptr->top=-1;
//     ptr->size=4;
//     ptr->arr=(int *)malloc(ptr->size*sizeof(int));
//     push(ptr,12);
//     push(ptr,13);
//     push(ptr,14);
//     push(ptr,15);
//     int d=pop(ptr);
//     int h=pop(ptr);
//     int g=pop(ptr);
//     int f=pop(ptr);
//     int e=pop(ptr);
//     peek(ptr);
//     return 0;
// }



//-----------------2>STACK BY LINKED LIST---------------------------
// #include <stdio.h>
// #include <stdlib.h>
// struct stack
// {
//     int data;
//     struct stack* next;
// };
// struct stack* top=NULL;
// void linkedListTraversal(struct stack *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next; 
//     }
// }
// int isfull(struct stack* top)
// {
//     struct stack* n=(struct stack*)malloc(sizeof(struct stack));
//     if(n==NULL)
//     {
//         return 1;
//     }
//     else 
//     {
//     return 0;
//     }
// }
// int isempty(struct stack* top)
// {
//     if(top==NULL)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// struct stack* push(struct stack* top,int val)
// {
//     if(isfull(top))
//     {
//         printf("stack overflow.\n");
//     }
//     else
//     {
//         struct stack* new =(struct stack * )malloc(sizeof(struct stack));
//         new->data=val;
//         new->next=top;
//         top=new;
//         return top;
//     }
// }
// int pop(struct stack * tp)
// {
//     if(isempty(tp))
//     {
//         printf("stack underflow.\n");
//     }
//     else
//     {
//         struct stack* n=tp;
//         top=(tp)->next;
//         int x=tp->data;
//         free(n);
//         return x;
//     }

// }

// int main()
// {
//     struct stack* st;
//     st=push(st,12);
//     st=push(st,13);
//     st=push(st,14);
//     printf("%d\n",pop(st));
//     printf("%d\n",pop(st));
    
//     linkedListTraversal(st);
//     return 0;
// }

// ---------------------3>QUEUE USING ARRAY-------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// struct queue
// {
//     int size;
//     int rear;
//     int front;
//     int * arr;
// };
// void enqueue(struct queue* q,int val)
// {
//     if(q->rear==q->size-1)
//     {
//         printf("queue overflow.\n");
//     }
//     else
//     {
//         q->rear++;
//         q->arr[q->rear]=val;
//     }
// }
// void dequeue(struct queue* q)
// {
//     if(q->front==q->rear)
//     {
//         printf("queue underflow.\n");
//     }
//     else
//     {
//         q->front++;
//         int val=q->arr[q->front];
//         printf("%d\t",val);
//     }
// }
// int main()
// {
//     struct queue* q=(struct queue*)malloc(sizeof(struct queue));
//     q->size=100;
//     q->front=-1;
//     q->rear=-1;
//     q->arr=(int *)malloc(sizeof(int));
//     enqueue(q,1);
//     enqueue(q,2);
//     dequeue(q);
//     dequeue(q);
//     return 0;
// }
// --------------- 4>QUEUE USING LINKED LIST-------------------
#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int data;
}
int main()
{
    
    return 0;
}