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
    if (ptr2 == NULL){
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
int main()
{
    struct node* first=NULL;
    int data,n;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the data for the node:\n");
        scanf("%d",&data);
        first=create(first,data);
    }
    delete(&first->next->next->next);
    display(first);
    return 0;
}