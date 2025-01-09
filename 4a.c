#include<stdio.h>
#include<stdlib.h>
int count=0; 
struct node 
{ 
struct node *prev; 
int data;
struct node *next; 
}*first,*temp,*last,*ptr; 

void create() 
{ 
int val; 
temp =(struct node *)malloc(sizeof(struct node)); 
temp->prev = NULL; 
temp->next = NULL; 
printf("\n Enter the value:"); 
scanf("%d",&val); 
temp->data = val; 
count++;
} 

void insertatindex()
{
    int index;
    printf("enter the value to find the value:\n");
    scanf("%d",&index);
    for(int i=0;i<n;i++)
    {
        
        ptr=ptr->next;
    }


}
void insertbeg() 
{ 
if (first == NULL) 
{ 
create(); 
first = temp; 
last = first; 
} 
else 
{ 
create(); 
temp->next = first; 
first->prev = temp; 
first = temp; 
} 
} 

void insertend() 
{ 
if(first==NULL) 
{ 
create(); 
first = temp; 
last = first; 
} 
else 
{ 
create(); 
last->next = temp; 
temp->prev = last; 
last = temp; 
} 
} 

void displaybeg() 
{  
    ptr =first; 
if (first == NULL) 
{ 
printf("List empty to display \n"); 
return;
} 
printf("\n Linked list elements from begining : \n"); 
while (ptr!= NULL) 
{ 
printf("%d\t", ptr->data);  
ptr = ptr->next; 
} 
printf(" No of nodes = %d ", count); 
} 

int deleteend() 
{ 
struct node *temp; 
if(first==NULL)
{
printf("\n List is empty");
return 0;    
}

temp=first;
if(temp->next==NULL) 
{ 
printf("\nthe deleted node is %d",temp->data);
free(temp); 
first=NULL; 
return 0; 
} 
else 
{  
ptr=last->prev;  
ptr->next=NULL; 
printf("\nthe deleted node is %d\t", last->data); 
free(last); 
last=ptr;
} 
count--; 
return 0; 
} 

int deletebeg() 
{ 
struct node *temp; 
if(first==NULL)
{
printf("\n List is empty");
return 0;    
}

temp=first;
if(temp->next==NULL) 
{ 
printf("\nthe deleted node is %d",temp->data);
free(temp); 
first=NULL;
} 
else 
{ 
first=first->next; 
printf("\nthe deleted node is %d",temp->data); 
free(temp); 
} 
count--; 
return 0; 
} 

void main() 
{ 
int ch,n,i; 
first=NULL; 
temp = last = NULL; 
printf("-----------------MENU--------------------\n"); 
printf("\n 1 create a DLL of n emp"); 
printf("\n 2 - Display from beginning"); 
printf("\n 3 - Insert at end"); 
printf("\n 4 - delete at end"); 
printf("\n 5 - Insert at beg"); 
printf("\n 6 - delete at beg"); 
printf("\n 7 - exit\n"); 
printf("------------------------------------------\n"); 
while (1) 
{ 
printf("\n Enter choice : "); 
scanf("%d",&ch); 
switch(ch) 
{ 
case 1: 
printf("\n Enter no of nodes: "); 
scanf("%d",&n); 
for(i=0;i<n;i++) 
insertend(); 
break; 
case 2: displaybeg();
break; 
case 3: insertend(); 
break; 
case 4: deleteend(); 
break; 
case 5: insertbeg(); 
break; 
case 6: deletebeg(); 
break; 
case 7: exit(0); 
default: printf("wrong choice\n"); 
} 
} 
} 
