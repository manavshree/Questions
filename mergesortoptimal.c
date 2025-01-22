#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create(struct node *first, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = NULL;
    ptr->data = data;

    struct node *temp = first;
    if (first == NULL)
    {
        return ptr;
    }
    else
    {
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
    return first;
}

void display(struct node *first)
{
    struct node *ptr = first;
    while (ptr != NULL)
    {
        printf("element is:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *first = NULL;
    struct node *second = NULL;
    int m, n, data;
    printf("enter the number of nodes for first linked list:\n:");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        printf("enter the data of %d node:\n", i + 1);
        scanf("%d", &data);
        first = create(first, data);
    }
    display(first);
    printf("enter the number of nodes for second linked list:\n:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the data of %d node:\n", i + 1);
        scanf("%d", &data);
        second = create(second, data);
    }
    display(second);

    struct node *temp = first;
    struct node *temp2 = second;
    struct node *third = NULL;
    while (temp != NULL && temp2 != NULL)
    {
        if (temp->data > temp2->data)
        {
            third = create(third, temp2->data);
            temp2 = temp2->next;
        }
        else if (temp2->data > temp->data)
        {
            third = create(third, temp->data);
            temp = temp->next;
        }
    }

    if (temp2 != NULL)
    {
        while (temp2 != NULL)
        {
            third = create(third, temp2->data);
            temp2 = temp2->next;
            /* code */
        }
    }
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            third = create(third, temp->data);
            temp = temp->next;
            /* code */
        }
    }
    printf("the sorted linked list is:\n");
    display(third);

    return 0;
}