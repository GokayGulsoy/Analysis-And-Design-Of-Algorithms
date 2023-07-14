#include <stdio.h>
#include <stdlib.h>

struct Node
{

   int data;
   struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// function for creating an linked queue
void enqueue(int x)
{
   
   struct Node* temp;
   temp = (struct Node* )malloc(sizeof(struct Node));
   if (temp == NULL)
   { 
      printf("\nQueue is full");
   }

   else
   {
      temp->data = x;
      temp->next = NULL;
      
      if (front == NULL)
      {
        front = temp;
        rear = front;
      }

      else
      {
        
        rear->next = temp;
        rear = temp; 
      }
   } 
}

// function to delete an element from linked queue
int dequeue()
{
  
  struct Node* temp;
  int x = -1;

  if (front == NULL)
  {
    printf("\nQueue is empty\n");
  }

  else
  {
     
     x = front->data;
     temp = front;
     front = front->next;
     free(temp);
  } 
   
  return x;
}

// function for displaying elements in linked queue
void display()
{
   
   struct Node* p;
   p = front;

   while (p != NULL)
   {
      
      printf("%d ",p->data);
      p = p->next; 
   }
   
   printf("\n");
}

// driver code
int main()
{

   printf("\nLinked queue after inserting 10,20,30,40\n");
   enqueue(10);
   enqueue(20);
   enqueue(30);
   enqueue(40);

   display();

   printf("\nLinked queue after two dequeue operations\n");
   dequeue();
   dequeue();
   display();

   return 0;
}