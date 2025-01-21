#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node* creates(struct node* first)
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=NULL;
    printf("enter the data for the node:\n");
    scanf("%d",&ptr->data);
    if(first==NULL)
    {
        return ptr;
    }
    struct node* temp;
    temp=first;
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
        printf("element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void searchval(struct node* first,int val)
{
    int count=1;
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
        
        if(ptr->data==val)
        {
            printf("the value is:%d which is at :%d",val,count);
            break;
        }
        
    }
    
    if(ptr==NULL)
        {
            printf("The value is not found");
        }
}
struct node* joining(struct node* first,struct node* second)
{
    struct node* ptr=first;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=second;
    return first;
}
int main()
{
    struct node* first=NULL;
    int n;
    printf("Enter the value of n for number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        first=creates(first);
    }
    // int val;
    // printf("Enter the value you want to find:\n");              //for searching an element.
    // scanf("%d",&val);
    // searchval(first,val);
    // printf("\nhello world\n");
    // display(first);
    printf("=========================first linked list ends here==================\n");
    struct node* second=NULL;
    int m;
    printf("enter the number of nodes for second linked list:\n");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        second=creates(second);
    }
    display(second);
    printf("=========================joined list starts here==================\n");

    joining(first,second);                     //for joining two list;
    display(first);
    return 0;

}