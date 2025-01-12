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
    ptr=(struct node* )malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;

    struct node* temp=first;
    if(first==NULL)
    {
        return ptr;
    }
    else
    {
        while(temp->next)
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
    while(ptr!=NULL)
    {
        printf("element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* bubblesort(struct node* first,int n)
{
    struct node* ptr=first;
    int count=1;
    while(count<n)
    {
        for(int i=0;i<n-count;i++)
        {
            if(ptr->data > ptr->next->data)
            {
                struct node* temp;
                temp->data=ptr->data;
                ptr->data=ptr->next->data;
                ptr->next->data=temp->data;
            }
            ptr=ptr->next;
        }
        count++;
    }
    return first;
}
int main()
{
    int n,data;
    struct node* first=NULL;
    printf("enter the number of nodes :\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data for the %d node:\n",i+1);
        scanf("%d",&data);
        first=create(first,data);
    }
    display(first);
    first=bubblesort(first,n);
    display(first);
    return 0;
}