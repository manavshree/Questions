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
void printarray(int arr[],int index)
{
    int total=0;
    for(int i=0;i<index;i++)
    {
        printf("%d\t",arr[i]);
        total+=arr[i];
    }
    printf(" \ntotal of path is :%d",total);
    printf("\n");
}
void printpathrecur(struct node* node,int path[],int pathlen)
{
    if(node==NULL)
    {
        return ;
    }
    path[pathlen]=node->data;
    pathlen++;
    if(node->left ==NULL && node->right ==NULL)
    {
        printarray(path,pathlen);
    }
    else
    {
        printpathrecur(node->left,path,pathlen);
        printpathrecur(node->right,path,pathlen);
    }
}
void printpath(struct node* node)
{
    int path[1000];
    printpathrecur(node,path,0);
}
int main()
{
    struct node* a=create(8);
    struct node* b=create(4);
    struct node* c=create(10);
    struct node* d=create(1);
    struct node* e=create(5);
    struct node* f=create(6);
    struct node* g=create(12);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    // preorder(a);
    // printf("\n");
    // postorder(a);
    // printf("\n");
    // inorder(a);
    printpath(a);
    return 0;
}