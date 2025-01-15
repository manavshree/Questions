#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
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
        return first;
    }
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
void delete(struct node**first)
{
    struct node* ptr=*first;
    struct node* ptr2=ptr->next;
    if (ptr2 == NULL){
        *first = NULL;
        return;
    }

    if ((*first)->next->next == NULL){
        *first = (*first)->next;
        return;
    }
    struct node* ptr3=ptr2->next;
    ptr->data=ptr2->data;
    ptr->next=ptr3;
    ptr2 = NULL;
}
struct node* reverse(struct node* first)
{
    struct node * prev=NULL;
    struct node * current=first;
    struct node * forward=first->next;
    while(current!=NULL)
    {
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    first=prev;
    return first;
}
// void operation(struct node** first,int n)
// {
//     // display(*first);
//     first=reverse(*first);
//     struct node* ptr=*first;
//     struct node* ptr2=ptr->next;

//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(ptr->data>ptr2->data)
//             {
//                 delete(&ptr2->next);
//             }
//             ptr2=ptr2->next;
            
//         }
//         ptr=ptr->next;
//     }
//     first=reverse(*first);
//     display(*first);
// }
int main()
{
    int n,data;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    struct node* first=NULL, *ptr = NULL, *ptr2 = NULL, *ptr0 = NULL;
    for(int i=0;i<n;i++)
    {
        printf("enter the data for the nodes:\n");
        scanf("%d",&data);
        first=create(first,data);
    }
    // first=reverse(first);
    // printf("Reversed List :\n");
    // display(first);
    ptr0 = first;
    while(ptr0->next!=NULL)
    {
        
        ptr=ptr0->next;
        while(ptr!=NULL)
        {
            if(ptr0->data <ptr->data)
            {
                delete(&ptr0);
                
            }
            ptr=ptr->next;
        }

        ptr0=ptr0->next;
    }
    // first=reverse(first);
    display(first);
    return 0;
}