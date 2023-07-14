#include <stdio.h>
#include <stdlib.h>

#ifndef LinkedQueue_h
#define LinkedQueue_h


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

// function for checking 
// whether Queue is empty 
int isEmpty()
{
   return front == NULL;
}

#endif