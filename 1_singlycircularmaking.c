#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* create(struct node* first,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=first;

    if(first==NULL)
    {
        ptr->next=ptr;
        return ptr;
    }
    else
    {
    struct node* temp=first->next;
    while(temp->next != first)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    }
    return first;
}
void display(struct node* first)
{
    struct node* ptr=first;
    do
    {
        printf("element is:%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=first);
}
struct node* insertatfirst(struct node* first,int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    struct node* ptr=first;
    ptr=ptr->next;
    while(ptr->next!=first)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=first;
    first=temp;
    return first;
}
struct node* insertatlast(struct node* first,int data)
{
    struct node* ptr=first;

    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    
    temp->next=first;
    ptr=ptr->next;
    while(ptr->next!=first)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    return first;
}
int main()
{
    struct node* first=NULL;
    int n;
    printf("enter the number of nodes :\n");
    scanf("%d",&n);
    int data;
    for(int i=0;i<n;i++)
    {
        printf("enter the  data for the %d node:\n",i+1);
        scanf("%d",&data);
        first=create(first,data);
    }
    display(first);
    printf("enter the data you want to insert at first:\n");
    int data2;
    scanf("%d",&data2);
    printf("after insertion:\n");
    first=insertatfirst(first,data2);
    first=insertatlast(first,data2);
    display(first);
    return 0;
}