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
struct node* reversepos(struct node* first,int n,int k)
{
    struct node* ptr=first;
    for(int i=0;i<(n-k);i++)
    {
        ptr=ptr->next;
    }
    first=ptr;
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
    int k;
    printf("enter the node you want to reverse:\n");
    scanf("%d",&k);
    first=reversepos(first,n,k);
    display(first);
    // first=max(first);
    return 0;
}