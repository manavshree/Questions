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
    ptr->next=NULL;
    ptr->data=val;
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
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void delete(struct node**first)
{
    struct node* ptr=*first;
    struct node* ptr2=ptr->next;
    if ((*first)->next == NULL){
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
void deletealternate(struct node* first)
{
    struct node* ptr=first;
    int c=0;
    while(ptr!=NULL)
    {
        if(c%2==0)
        {
            c++;
            continue;
        }
        else
        {
            delete(&ptr);
            c++;
        }
        ptr=ptr->next;
    }
    
}
// void delete(struct node**first)
// {
//     struct node* ptr=*first;
//     struct node* ptr2=ptr->next;
//     if ((*first)->next == NULL){
//         *first = NULL;
//         return;
//     }

//     if ((*first)->next->next == NULL){
//         *first = (*first)->next;
//         return;
//     }
//     struct node* ptr3=ptr2->next;
//     ptr->data=ptr2->data;
//     ptr->next=ptr3;
//     ptr2 = NULL;
// }
int main()
{
    int n,data;
    struct node* first=NULL;
    printf("enter the number of node:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("value of data is:\n");
        scanf("%d",&data);

        first=create(first,data);
    }
    display(first);
    // struct node* temp=NULL;
    deletealternate(first);
    printf("after deletion is:\n");
    display(first);
    return 0;
}