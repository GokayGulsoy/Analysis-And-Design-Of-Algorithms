#include <stdlib.h>
#include <stdio.h>

/*
 Queue header file for
 Binary Tree creation
*/
#ifndef Queue_h
#define Queue_h

struct Node
{

   struct Node* lchild;
   int data;
   struct Node* rchild;
};

struct Queue
{
   int size;
   int front;
   int rear;
   struct Node** queue;
};

// function for creating a queue
void create(struct Queue *q,int size)
{
  
  q->size = size;
  q->front = -1;
  q->rear = -1;
  q->queue = (struct Node **)malloc(sizeof(int)*size);
}

// enqueue function for adding an element
void enqueue(struct Queue *q,struct Node* x)
{
   
   if (q->rear == q->size-1)
   {
       printf("\nQueue is full");
   }

   else
   {
     q->rear++;
     q->queue[q->rear] = x;
   }
}

// function for deleting an element from queue
struct Node* dequeue(struct Queue *q)
{
     
     struct Node* x = NULL;
     if (q->front == q->rear)
     {
        printf("\nQueue is empty");
     }

     else
     {
        q->front++;
        x = q->queue[q->front];
     }

     return x;  
}

// function that checks whether queue is empty
int QueueisEmpty(struct Queue q)
{
    return q.front == q.rear;
}

// function for displaying a queue
void display(struct Queue q)
{
   
   for (int i = q.front+1; i <= q.rear; i++)
   {
      
      printf("%d ",q.queue[i]->data);
   }

   printf("\n"); 
}

#endif 