#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};

//for display.
void display(struct node* first)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr=first;
    while(ptr!=NULL)
    {
        printf("element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}


// case 1:delete at first of a linked list:
struct node* deleteatfirst(struct node* first)
{
    struct node* ptr=first;
    first=first->next;
    printf("the deleted node is:%d\n",ptr->data);
    free(ptr);
    return first;
}

//case 2:  delete after a given index:

struct node* deleteatindex(struct node* first,int index)
{
    
    return first;
}

// case 3:delete at last :
struct node* deleteatlast(struct node* first)
{
    struct node* p=first;
    struct node* q=first->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return first;
}

// case4: delete after a given node:

struct node* deletebyelement(struct node* first,int element)
{
    struct node* ptr=first;
    struct node* q;
    if(ptr->data==element)
    {
        deleteatfirst(first);
        
    }
    else
    {
    while(ptr->data!=element)
    {
        q=ptr;
        ptr=ptr->next;
    }
    q->next=ptr->next;
    free(ptr);
    return first;
    }

}






int main()
{
    struct node* first;
    struct node* second;
    struct node* third;
    struct node* four;


    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));

    first->data=1;
    first->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=four;
    four->data=4;
    four->next=NULL;
    printf("the list before change is:\n");
    display(first);


    printf("the list after change is:\n"); 
    // first=deleteatfirst(first);
    first=deletebyelement(first,1);
    display(first);
    return 0;
}