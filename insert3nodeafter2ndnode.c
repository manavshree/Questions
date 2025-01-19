#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* create(struct node* first,int val)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
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
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* insertaftersecond (struct node* first)
{
    struct node* ptr=first;
    struct node* third=NULL;
    int val;
    for(int i=0;i<3;i++)
    {
        printf("enter the value of %d node to attach:\n",i+1);
        scanf("%d",&val);
        third=create(third,val);
    }
    ptr=ptr->next;
    struct node* temp=ptr->next;
    ptr->next=third;
    struct node* ptr2=third;
    while(ptr2->next!=NULL)
    {
        ptr2=ptr2->next;
    }
    ptr2->next=temp;
    return first;

}
int main()
{

    struct node* first=NULL;
    int n;
    printf("enter the number of nodes you want to make:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int val;
        printf("enter the value of  %d nodes:\n",i+1);
        scanf("%d",&val);
        first=create(first,val);
    }
    first=insertaftersecond(first);
    display(first);

    return 0;
}