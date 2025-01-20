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
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    if(first==NULL)
    {
        return ptr;
    }
    else
    {
        struct node* temp=first;
        while(temp->next)
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
struct node* ordering(struct node* first,int n)
{
    struct node* ptr=first;
    struct node* temp=first;
    struct node* temp2=first;
    while(temp!=NULL)
    {
        ptr=ptr->next;
        temp=temp->next->next;
    }
    struct node* third=NULL;
    while(ptr!=NULL)
    {
        third=create(third,ptr->data);
        ptr=ptr->next;
    }
    third=reverse(third);
    struct node* temp3=third;
    struct node* fourth=NULL;
    for(int i=0;i<n;i++)
    {
        fourth=create(fourth,temp2->data);
        fourth=create(fourth,temp3->data);
        temp2=temp2->next;
        temp3=temp3->next;
    }
    return fourth;
}
int main()
{
    struct node* first=NULL;
    int n;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    int data;
    for(int i=0;i<n;i++)
    {
        printf("enter data for the %d node:",i+1);
        scanf("%d",&data);
        first=create(first,data);
    }
    display(first);
    printf("The new linked list is:\n");
    int m=n/2;
    struct node* fourth=NULL;
    fourth=ordering(first,m);
    display(fourth);
    return 0;
}