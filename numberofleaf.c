#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create(int val)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
} 

void insert(struct node* root,int key)
{
    struct node* prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(root->data==key)
        {
            printf("%d also in bst.\n",key);
            return ;
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    struct node* new =create(key);
    if(key<prev->data)
    {
        prev->left=new;
    }
    else
    {
        prev->right=new;
    }
}

void postorder(struct node* temp)
{
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d\t",temp->data);
    }
}

void inorder(struct node* temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d\t",temp->data);
        inorder(temp->right);
    }
}

int countleaf(struct node* temp)
{
    static int sum=0;
    if(temp==NULL)
    {
        return 0;
    }
    if(temp->left==NULL && temp->right==NULL)
    {
        sum+=temp->data;
        return 1;
    }
    else
    {
        return countleaf(temp->left)+countleaf(temp->right);
    }
    printf("\n%d\n",sum);
}

void preorder(struct node* temp)
{
    if(temp!=NULL)
    {
        printf("%d\t",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

int main()
{
    struct node* a=create(46);
    insert(a,15);
    insert(a,79);
    insert(a,90);
    insert(a,10);


    inorder(a);
    printf("\n");
    preorder(a);
    printf("\n");


    postorder(a);
    printf("\n");
    printf("%d\t",countleaf(a));
    return 0;
}