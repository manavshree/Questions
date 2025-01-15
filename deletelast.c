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
struct node  * lastnode(struct node* first)
{
    struct node* ptr=first;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    printf("%d\n",ptr->data);
    struct node* temp=ptr->next;
    ptr->next=NULL;
    printf("%d\n",temp->data);
    free(temp);
    return first;
}
int main()
{
    struct node* first=NULL;
    int n;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int val;
        printf("enter the value of data:\n");
        scanf("%d",&val);
        first=create(first,val);
    }
    // display(first);
    first=lastnode(first);
    display(first);

    return 0;
}