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
    ptr->prev=NULL;
    ptr->next=NULL;
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
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void revdisplay(struct node* first)
{
    struct node* ptr=first;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    do
    {
        printf("%d\n",ptr->data);
        ptr=ptr->prev;
    }while(ptr!=NULL);
}

int main()
{
    struct node* first=NULL;
    int n,data;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the data %d:",i+1);
        scanf("%d",&data);
        first=create(first,data);
    }
    display(first);
    // printf("new is:\n");
    // revdisplay(first);
    return 0;
}