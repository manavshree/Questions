#include <stdio.h>
#include <stdlib.h>



// from here start to make a list of linked list:                 
struct node
{
    int data;
    struct node* next;
};
struct node* create(struct node* first)
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=NULL;
    printf("enter the value of node:\n");
    scanf("%d",&ptr->data);

    if(first==NULL)
    {
        return ptr;
    }

    struct node* temp=first;
    while(temp->next)
    {
        temp=temp->next; 
    }
    temp->next=ptr;
    return first;
}
//          ends here for making list of linked list:



void display(struct node* first)
{
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}


struct node* deletebyindex(struct node* first,int n)
{
    struct node* current=first;
    struct node* prev;
    for(int i=0;i<n-1;i++)
    {
        prev=current;
        current=current->next;
    }
    prev->next=current->next;
    free(current);
    return first;
}


struct node* deletebynode(struct node* first)
{
    struct node* forward=first->next;
    // struct node* forwardnext=forward->next;
    first->data=forward->data;
    first->next=first->next->next;
    free(forward);
    return first;
}

int main()
{
    struct node* first=NULL;
    int n;
    printf("enter the number of nodes to be made:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        first=create(first);
    }
    int na;
    printf("enter the node which you want to delete:\n");
    scanf("%d",&na);
    first=deletebyindex(first,na);
    // first=deletebynode(first->next->next);
    display(first);
    return 0;
}