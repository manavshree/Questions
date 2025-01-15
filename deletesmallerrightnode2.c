#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* create(struct node* first,int data)
{
    struct node* ptr=(struct node* )malloc(sizeof(struct node));
    ptr->data=data;
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
        return first;
    }
}
void display(struct node* first)
{
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        printf("element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void delete(struct node**first)
{
    struct node* ptr=*first;
    struct node* ptr2=ptr->next;
    if ((*first)->next == NULL){
        *first = NULL;
        return;
    }

    if ((*first)->next->next == NULL){
        *first = (*first)->next;
        return;
    }
    struct node* ptr3=ptr2->next;
    ptr->data=ptr2->data;
    ptr->next=ptr3;
    ptr2 = NULL;
}
struct node* reverse(struct node* first)
{
    struct node * prev=NULL;
    struct node * current=first;
    struct node * forward=first->next;
    while(current!=NULL)
    {
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    first=prev;
    return first;
}
struct node* deletesmaller(struct node* first)
{
    first=reverse(first);
    struct node* ptr=first->next;
    struct node* ptr2=NULL;
    int max=first->data;
    while(ptr->next!=NULL)
    {
        if(ptr->data>max)
        {
            max=ptr->data;
            ptr=ptr->next;
        }
        else
        {
            ptr2=ptr;
            ptr=ptr->next;
            delete(&ptr);
        }
    }
    first=reverse(first);
    return first;
}
int main()
{
    struct node* first=NULL;
    int data,n;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data for the nodes:\n");
        scanf("%d",&data);
        first=create(first,data);
    }
    first=deletesmaller(first);
    display(first);
    return 0;
}