#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* create( struct node* first,int data)
{
    struct node* ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL; 
    ptr->prev=NULL;
    if(first==NULL)
    {
        return ptr;
    }
    else
    {
        struct node * temp=first;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
    }
    return first;
}
void display(struct node *first)
{
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        printf("element is :%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void revdisplay(struct node* first)
{
    struct node* ptr=first;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    do{
        printf("element is:%d\n",ptr->data);
        ptr=ptr->prev;
    }while(ptr!=NULL);
}
void reversal(struct node* first)
{
    if(first==NULL)
    {
        return;
    }
    reversal(first->next);
    printf("%d\n",first->data);
}
int main()
{
    struct node*first=NULL;
    int n,data;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data for node %d:",i+ 1);
        scanf("%d",&data);
        first=create(first,data);
    }
    display(first);
    reversal(first);
    return 0;
}






