#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* circcreate(struct node* first,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->prev=NULL;
    ptr->next=first;
    if(first==NULL)
    {
        ptr->next=ptr;
        ptr->prev=ptr;
        return ptr;
    }
    else 
    {
        struct node* temp=first->next;
        while(temp->next!=first)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev = temp;
        first->prev=ptr;
    }
    return first;
}
void display(struct node* first)
{
    struct node* ptr=first;
    printf("element is:%d\n",ptr->data);
    ptr=ptr->next;
    while(ptr!=first)
    {
        printf("element is:%d\n",ptr->data);
        ptr = ptr->next;
    }

}
int main()
{
    struct node* first=NULL;
    int n,data;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the data for nodes:\n");
        scanf("%d",&data);
        first=circcreate(first,data);
    }
    display(first);
    return 0;
}