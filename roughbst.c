#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create(int data)
{
    struct node* n=(struct node* )malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node* n)
{
    if(n!=NULL)
    {
        printf("%d\t",n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
void postorder(struct node* n)
{
    if(n!=NULL)
    {
        postorder(n->left);
        postorder(n->right);
        printf("%d\t ",n->data);

    }
}
void inorder(struct node* n)
{
    if(n!=NULL)
    {
        inorder(n->left);
        printf("%d\t",n->data);
        inorder(n->right);
    }
}
void printmain(struct node* n)
{
    if(n==NULL)
    {
        return ;
    }
    int arr[10];
    printroottoleaf(n,arr,0);
}
void printroottoleaf(struct node* n,int arr[],int index)
{
    if(n==NULL)
    {
        return ;
    }
    arr[index]=n->data;
    if(n->left==NULL&& n->right==NULL)
    {
        printarray(arr,index);
    }
    printroottoleaf(n->left,arr,index+1);
    printroottoleaf(n->right,arr,index+1);
}
void printarray(int arr[],int index)
{
    for(int i=0;i<index;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int countleafnode(struct node* n)
{
    if(n==NULL)
    {
        return 0;
    }
    else if(n->left==NULL && n->right ==NULL)
    {
        printf("%d\n",n->data);
        return 1;
    }
    else
    {
        return countleafnode(n->left)+countleafnode(n->right);
    }
}
int main()
{
    struct node* a=create(2);
    struct node* b=create(3);
    struct node* c=create(4);
    struct node* d=create(5);
    struct node* e=create(6);
    struct node* f=create(7);
    struct node* g=create(8);
    a->left=b;
    a->right=c;
    b->right=d;
    b->left=f;
    c->left=e;
    c->right=g;
    // preorder(a);
    // printf("\n");
    // postorder(a);
    // printf("\n");
    // inorder(a);
    // printf("%d\n",countleafnode(a));
    // inorder(a);
    // printf("\n");
    // int s=countleafnode(a);
    printroottoleaf(a);
    return 0;
}