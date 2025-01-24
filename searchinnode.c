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
        printf("\nelement is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void search(struct node* first,int tempo)
{
    int flag=0;
    int count=0;
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        if(ptr->data==tempo)
        {
            flag=1;
            break;
        }
        count++;
        ptr=ptr->next;
    }
    if(flag==1)
    {
        printf("FOUND AT %d POSITION.",count+1);
    }
    else
    {
        printf("NOT FOUND.");
    }
}
int main ()
{
    struct node* first;
    first=NULL;
    int m,data;
    printf("enter the number of nodes:\n");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        printf("enter the data for %d node:\n",i+1);
        scanf("%d",&data);
        first=create(first,data);
    }
    display(first);
    int temp;
    printf("enter the data you want to find:\n");
    scanf("%d",&temp);
    search(first,temp);
    return 0;
}