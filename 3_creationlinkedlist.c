#include <stdio.h>
#include <stdlib.h>                    //very important to import.
struct node                         //used to make a node.
{
    int data;
    struct node* next;
};
void display(struct node* ptr)               //for display with traversal.
{
    while(ptr->next!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("%d\n",ptr->data);
}
void test(struct node* first)
{
    struct node* ptr=first;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{ 
    struct node* first;                          //initialization like int a.
    struct node* second;
    struct node* third;
    struct node* fourth;

    first=(struct node*)malloc(sizeof(struct node));  //giving space in heap.
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    first->data=1;                        //giving data to first node.
    first->next=second;                    //giving data for next node.
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    display(first);                           //function call.
    printf("hello+===================\n");
    test(first);
    return 0;
}