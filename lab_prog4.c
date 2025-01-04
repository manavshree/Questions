#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* create(struct node* first,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(first==NULL)
    {
        return ptr;
    }
    else
    {
        struct node* temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
    }
    return first;
}
void display(struct node* first)
{
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* insert_at_left(struct node* first,int adddata,int val)
{
    struct node * temp=(struct node*)malloc(sizeof(struct node));
    temp->data=adddata;
    temp->next=NULL;
    temp->prev=NULL;

    struct node* ptr2=first;
    struct node* ptr=NULL;
    while((ptr2->data!=val) && (ptr2->next!=NULL))
    {
    ptr=ptr2;
    ptr2=ptr2->next;
    }
    if(ptr2->data==val)
    {
        ptr->next=temp;
        temp->prev=ptr;
        ptr2->prev=temp;
        temp->next=ptr2;
    }
    else
    {
        printf("value not found.\n");
    }
    return first;
}

int main()
{
    struct node* first=NULL;
    int n,data;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the data for the %d nodes:\n",i+1);
        scanf("%d",&data);
        first=create(first,data);
    }
    display(first);
    first=insert_at_left(first,12,3);
    display(first);
    return 0;
}