#include <stdio.h>
#include <stdlib.h>

struct Queue
{
   int size;
   int front;
   int rear;
   int* queue;
};

// function for creating a circular queue
void create(struct Queue *q,int size)
{
  
  q->size = size;
  q->front = 0;
  q->rear = 0;
  q->queue = (int *)malloc(sizeof(int)*size);
}

// enqueue function for adding an element
void enqueue(struct Queue *q,int x)
{
   
   if ((q->rear+1)%q->size == q->front)
   {
       printf("\nQueue is full");
   }

   else
   {
     
     q->rear = (q->rear + 1)%q->size;
     q->queue[q->rear] = x;
   }
}

// function for deleting an element from circular queue
int dequeue(struct Queue *q)
{
     
     int x = -1;
     if (q->front == q->rear)
     {
        printf("\nQueue is empty");
     }

     else
     {
        q->front = (q->front + 1)%q->size;
        x = q->queue[q->front];
     }

     return x;  
}

// function for displaying a circular queue
void display(struct Queue q)
{
   int i = q.front+1;
   do 
   {

     printf("%d ",q.queue[i]);
     i = (i+1) % q.size;


   } while (i != q.rear+1); 
     
   printf("\n"); 
}

// driver code
int main()
{

   struct Queue q;
   create(&q,10);
   printf("\nCircular Queue after inserting 10,20,30,40\n");
   enqueue(&q,10);
   enqueue(&q,20);
   enqueue(&q,30);
   enqueue(&q,40);
   display(q);
 
   printf("\nCircular Queue after three dequeue operations\n");
   dequeue(&q);
   dequeue(&q);
   dequeue(&q);
   display(q); 

   return 0; 
}