#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node * createNode (struct node * head, int data){
    if (head == NULL) {
        struct node * newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }
    struct node * ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    ptr->next = newNode;

    return head;
    
}

void display(struct node *ptr, int n)
{
    struct node * temp = ptr;
    for (int i = 0; i < n; i++)
    {
    printf("|%d|\t->", ptr->data);
    ptr = ptr->next;
    }
}

int main()
{
    int n;
    printf("enter the number of elements :\n");
    scanf("%d", &n);
    struct node * ll = NULL;
    int data;
    for (int i = 0; i < n; i++)
    {
        printf("enter the data for the list:\n");
        scanf("%d", &data);
        ll = createNode(ll, data);
    }
    display(ll, n);

    return 0;
}