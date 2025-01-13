#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int count=0;

struct node
{
  int data;
  struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue (int d)			
{ 
  struct node *new;
  new = (struct node *) malloc (sizeof (struct node));
  new->data = d;
  new->next = NULL;
  count++;
   if ((front == NULL))
    {
      front = rear = new;
      rear->next = front;
    }
  else
    {
      rear->next = new;
      rear = new;
      new->next = front;
    }
}

void dequeue()			
{
  struct node *temp;
  temp = front;
  if ((front == NULL) )
    printf ("\nQueue is Empty");
  else if (front == rear)
    {
      front = rear = NULL;
      printf ("deleted data:%d\t", temp->data);
      free (temp);
      count--;
    }
  else
    {
      front = front->next;
      rear->next = front;
      printf ("deleted data:%d\t", temp->data);
      free (temp);
      count--;
    }
}
void display ()
{				
  struct node *temp;
  temp = front;
  if ((front == NULL))
    printf ("\nQueue is Empty");
  else
    {
      do
	{
	  printf ("%d\t", temp->data);
	  temp = temp->next;
	}
      while (temp != front);
    }
}


int main()  
{  
    int choice=1;
    int d;   
      
    while(choice<4 && choice!=0)    
    {  
    printf("\n 1: Enque");  
    printf("\n 2: Deque");  
    printf("\n 3: Display"); 
    printf("\n 4. Exit"); 
    printf("\nEnter your choice:");  
    scanf("%d", &choice);  
      
    switch(choice)  
    {  
          
        case 1: if(count==MAX)
                {
                  printf("circular queue is full\n");
                }
                else {
                    printf("enetr the data\n");
                    scanf("%d",&d);
                    enqueue(d); 
                }
                break;  
        case 2:dequeue();  
                break;  
        case 3:display();  
                break;
        case 4:exit(1);
        default:printf("Wrong choice \n");
                break;
  
    }
    }  
    return 0;  
}