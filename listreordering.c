//input->1,2,3,4,5,6
//output->1,6,2,5,3,4
//pehle first then last phir second then second last phir third then third last.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* create(struct node* first,int data)
{
    struct node * ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
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
void display(struct node* first)
{
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        printf("ELEMENT IS:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node*  reverse(struct node* first)
{
    struct node * prev=NULL;
    struct node* current =first;
    struct node* forward=first->next;
    while(current!=NULL)
    {
        forward=current->next;

        current ->next=prev;
        prev = current;
        current=forward;
    }
    first = prev;
    return first;
}
struct node* ordering(struct node * first)
{
    struct node* slow=first;
    struct node* fast=first;
    while(fast!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    reverse(slow);
    return first;
}
int main()
{
    struct node* first =NULL;
    int n;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    int data;
    for(int i=0;i<n;i++)
    {
        printf("Enter the data for the node:\n");
        scanf("%d",&data);
        first=create(first,data);
    }
    first=ordering(first);
    display(first);

    return 0;
}