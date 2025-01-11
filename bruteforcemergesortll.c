#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* create(struct node* first, int data)
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=NULL;
    ptr->data= data;

    struct node* temp=first;
    if(first==NULL)
    {
        return ptr;
    }
    else{
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
struct node* insertnode(struct node* first,struct node* newnode)
{
    struct node* ptr=first;
    if(first==NULL)
    {
        return newnode;
    }
    else{
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
        return first;
    }
}

int main()
{
    struct node* first=NULL;
    int n, data;
    printf("enter the number of node you want to make :\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the data of node:\n");
        scanf("%d",&data);
        first=create(first, data);
    }
    // display(first);
    //         for insertion:
    // struct node* temp;
    // temp=(struct node*)malloc(sizeof(struct node));
    // temp->data=12;
    // temp->next=NULL;
    // first=insertnode(first,temp);
    // printf("after insertion linked list is:\n");
    // display(first);
    int m;
    struct node* second =NULL;
    printf("enter the number of node for second linked list:\n");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        printf("enter the data of node:\n");
        scanf("%d",&data);
        second =create(second, data);
    }
    // printf("\nThe second linked list is:\n");
    // display(second);
    struct node* third=NULL;
    // int p=m+n;
    int i=m+n+1;
    int j=0;
    struct node* temp1=first;
    struct node* temp2=second;

    while(j++<i)
    {
        if(temp1->data>temp2->data)
        {
            third=create(third,temp2->data);
            temp2=temp2->next;
        }
        else
        {
            third=create(third,temp1->data);
            temp1=temp1->next;
        }
    }
    display(third);
    return 0;
}