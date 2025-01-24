// // // #include <stdio.h>
// // // #include <stdlib.h>
// // // struct node{
// // //     int data;
// // //     struct node* next;
// // // };
// // // struct node* create(struct node* first,int data)
// // // {
// // //     struct node * ptr=(struct node*)malloc(sizeof(struct node));
// // //     ptr->data=data;
// // //     if(first==NULL)
// // //     {
// // //         return ptr;
// // //     }
// // //     else
// // //     {
// // //         struct node* temp=first;
// // //         while(temp->next!=NULL)
// // //         {
// // //             temp=temp->next;
// // //         }
// // //         temp->next=ptr;
// // //     }
// // //     return first;
// // // }
// // // void display(struct node* first)
// // // {
// // //     struct node* ptr=first;
// // //     while(ptr!=NULL)
// // //     {
// // //         printf("%d\n",ptr->data);
// // //         ptr=ptr->next;
// // //     }
// // // }
// // // int main ()
// // // {
// // //     struct node* first=NULL;
// // //     int n,data;
// // //     printf("enter the number of nodes:\n");
// // //     scanf("%d",&n);
// // //     for(int i=0;i<n;i++)
// // //     {
// // //         printf("enter the data for the nodes:\n");
// // //         scanf("%d",&data);
// // //         first=create(first,data);
// // //     }
// // //     display(first);
// // //     return 0;
// // // }
// // #include <stdio.h>
// // #include <stdlib.h>
// // struct node
// // {
// //     int data;
// //     struct node* next;
// // };
// // struct node* create(struct node* first,int data)
// // {
// //     struct node * ptr=(struct node*)malloc(sizeof(struct node));
// //     ptr->data=data;
// //     ptr->next=NULL;
// //     if(first==NULL)
// //     {
// //         return ptr;
// //     }
// //     else
// //     {
// //         struct node* temp=first;
// //         while(temp->next!=NULL)
// //         {
// //             temp=temp->next;
// //         }
// //         temp->next=ptr;
// //     }
// //     return first;
// // }
// // void display(struct node* first)
// // {
// //     struct node* ptr=first;
// //     while(ptr!=NULL)
// //     {
// //         printf("%d\n",ptr->data);
// //         ptr=ptr->next;
// //     }
// // }
// // struct node* rev(struct node* first)
// // {
// //     struct node* prev=NULL;
// //     struct node* current=first;
// //     struct node* forward=first->next;
// //     while(current !=NULL)
// //     {
// //         forward=current->next;
// //         current->next=prev;
// //         prev=current;
// //         current =forward;
// //     }
// //     first=prev;
// //     return first;

// // }

// // int main ()
// // {
// //     struct node* first=NULL;
// //     int n,data;
// //     printf("enter the number of nodes:\n");
// //     scanf("%d",&n);
// //     for(int i=0;i<n;i++)
// //     {
// //         printf("enter the data for the nodes:\n");
// //         scanf("%d",&data);
// //         first=create(first,data);
// //     }
// //     display(first);
// //     first=rev(first);
// //     display(first);
// //     return 0;
// // }
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node* next;
//     struct node* prev;
// };
// struct node* create( struct node* first,int data)
// {
//     struct node* ptr=(struct node* )malloc(sizeof(struct node));
//     ptr->data=data;
//     ptr->next=NULL;
//     ptr->prev=NULL;
//     if(first==NULL)
//     {
//         return ptr;
//     }
//     else
//     {
//         struct node* temp=first;
//         while(temp->next!=NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=ptr;
//         ptr->prev=temp;
//     }
//     return first;
// }
// void display(struct node* first)
// {
//     struct node* ptr=first;
//     do{
//         printf("%d\n",ptr->data);
//         ptr=ptr->next;
//     }while(ptr!=NULL);
// }
// int main()
// {
//     struct node* first=NULL;
//     int n,data;
//     printf("etnert the number of nodes:\n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         printf("etnete data:\n");
//         scanf("%d",&data);
//         first=create(first,data);
//     }
//     display(first);
//     return 0;
// }
// +++++++++++++++++++++n NOW FORCIRCULAR:++++++++++++++++++++++++++++
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;

};
struct node* circcreate(struct node* first,int data)
{
    struct node* ptr=(struct node* )malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=first;
    if(first==NULL)
    {
        ptr->next=ptr;
        return ptr;

    }
    else
    {
        struct node* temp=first->next;
        while(temp->next!=first)
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
    do
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=first);
}
int main()
{
struct node* first=NULL;
    int n,data;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter  data:\n");
        scanf("%d",&data);
        first=circcreate(first,data);
    }
    display(first);
    return 0;
}