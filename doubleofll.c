#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node
{
    int  data;
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
    }
    return first;
}

void display(struct node* first)
{
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
struct node* newlist(struct node* first,int n)
{
    double tens=pow(10,n-1);
    int total=0;
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        total+=ptr->data*tens;
        tens=tens/10;
        ptr=ptr->next;
    }
    printf("NUMBER IS:%d\n",total);
    total=total*2;
    struct node* third=NULL;
    while(total>0)
    {
        int v=total%10;
        third=create(third,v);
        total/=10;
    }
    return third;
}
int main()
{
    struct node* first=NULL;
    int n,data;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the data for the nodes:\n");
        scanf("%d",&data);
        first=create(first,data);
    }
    struct node* third=NULL;
    third=newlist(first,n);
    printf("after operation is:\n");
    display(third);
    return 0;
}