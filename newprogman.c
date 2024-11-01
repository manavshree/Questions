#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* create(struct node * head)
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next= NULL;
    printf("enter the data for this node:\n");
    scanf("%d",&ptr->data);
    
    if (head == NULL) return ptr;
    
    struct node * temp = head;
    while (temp->next){
        temp = temp->next;
    }
    
    temp->next = ptr;
    return head;
}
void display(struct node* first)
{
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        printf("\n%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

int main()
{
    int n;
    printf("enter the number of nodes your want to make:\n");
    scanf("%d",&n);
    struct node* first=NULL;
    for(int i=0;i<n;i++)
    {
        first = create(first);
    }
    printf("-------------The linked list is:-----------");
    display(first);
    return 0;
}