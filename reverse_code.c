#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void display(struct node* first)
{
    struct node* ptr=first;
    while(ptr!=NULL)
    {

        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}


struct node* reverse(struct node* first)
{
    struct node* previous=NULL;
    struct node* current=first;
    struct node* forward=first->next;
    while(current!=NULL)
    {
        forward=current->next;

        current ->next=previous;
        previous = current;
        current=forward;
    }
    first = previous;
    return first;
}

int main()
{
    struct node* first;
    struct node* second;
    struct node* third;
    struct node* fourth ;
    struct node* fifth;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));

    first->data=5;
    first->next=second;
    second->data=6;
    second->next=third;
    third->data=7;
    third->next=fourth;
    fourth->data=8;
    fourth->next=fifth;
    fifth->data=9;
    fifth->next=NULL;
    // int n;
    // printf("enter the number of elements in linked list:\n");
    // scanf("%d",&n);
    // struct node* ptr=first;
    // while(ptr->next!=NULL)
    // {
    //     if(ptr->data%2==0)
    //     {
    //         print(ptr);
    //     }
    //     else
    //     {
    //         continue;
    //     }
    //     ptr=ptr->next;
    // }
    printf("----------whole linked list:------------\n");
    display(first);
    printf("----------new linked list:------------\n");
    first=reverse(first);
    display(first);

    return 0;
}