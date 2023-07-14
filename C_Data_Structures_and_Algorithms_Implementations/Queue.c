#include <stdio.h>
#include <stdlib.h>

struct Queue
{
   int size;
   int front;
   int rear;
   int* queue;
};

// function for creating a queue
void create(struct Queue *q,int size)
{
  
  q->size = size;
  q->front = -1;
  q->rear = -1;
  q->queue = (int *)malloc(sizeof(int)*size);
}

// enqueue function for adding an element
void enqueue(struct Queue *q,int x)
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
int dequeue(struct Queue *q)
{
     
     int x = -1;
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

// function for displaying a queue
void display(struct Queue q)
{
   
   for (int i = q.front+1; i <= q.rear; i++)
   {
      
      printf("%d ",q.queue[i]);
   }

   printf("\n"); 
}

// driver code
int main()
{

   struct Queue q;
   create(&q,10);
   printf("\nQueue after inserting 10,20,30,40\n");
   enqueue(&q,10);
   enqueue(&q,20);
   enqueue(&q,30);
   enqueue(&q,40);
   display(q);
 
   printf("\nQueue after three dequeue operations\n");
   dequeue(&q);
   dequeue(&q);
   dequeue(&q);
   display(q); 

   return 0; 
}


















