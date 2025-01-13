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
    struct node* s=(struct node* )malloc(sizeof(struct node));
    s->data=val;
    s->left=NULL;
    s->right=NULL;
    return s;
}
void insert(struct node* root,int key)
{
    struct node* prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(key==root->data)
        {
            printf("cannot insert %d bcoz already in BST.\n",key);
            return;
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

int inorder(struct node* ptr)
{
    static int s=0;
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("%d\t",ptr->data);
        s++;
        inorder(ptr->right);
    }
    return s;
}
int countn(struct node* ptr)
{
    if(ptr==NULL)
    {
        return 0;
    }
    if(ptr->left==NULL && ptr->right==NULL)
    {
        return 1;
    }
    else
    {
        return countn(ptr->left)+countn(ptr->right);
    }
}
void postorder(struct node* ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d\t",ptr->data);
    }
}
int main()
{
    
    struct node* a=create(5);
    insert(a,6);
    insert(a,7);
    insert(a,8);
    insert(a,3);
    insert(a,1);

    int d=inorder(a);
    printf("\n%d\n",d);
    printf("\n");
    postorder(a);
    printf("\n%d",countn(a));

    return 0;
}