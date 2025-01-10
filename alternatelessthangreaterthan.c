//input->1,2,3,|,4,5,6;
//output->1<4>2<5>3<6;("|" diye hai taki differentiate.);
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
    struct node* temp=first;
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
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* lessthangreaterthan(struct node* first,int n)
{
    struct node* ptr=first;
    struct node* ptr2=first;
    for(int i=0;i<n;i++)
    {
        ptr2=ptr2->next;
    }
    struct node* third=NULL;
    for(int i=0;i<n;i++)
    {
        third=create(third,ptr->data);
        third=create(third,ptr2->data);
        ptr=ptr->next;
        ptr2=ptr2->next;
    }
    return third;
}

int main()
{
    struct node * first=NULL;
    int n,data;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the data for the nodes:\n");
        scanf("%d",&data);
        first=create(first,data);
    }
    // display(first);
    int m=n/2;
    first=lessthangreaterthan(first,m);
    display(first);
    return 0;
}