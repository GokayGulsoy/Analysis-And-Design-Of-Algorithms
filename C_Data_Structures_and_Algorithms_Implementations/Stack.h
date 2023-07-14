#include <stdio.h>
#include <stdlib.h>

#include "Queue.h"
#ifndef Stack_h
#define Stack_h

/*
   Array base implementation 
   of Stack ADT
*/

// struct representing the stack ADT
struct stack 
{
   int size;
   int top; 
   struct Node** s; 
};

// function for creating a stack
void Stackcreate(struct stack* st)
{
   
   printf("\nEnter the size of the stack: ");
   scanf("%d",&st->size);
   st->top = -1;
   st->s = (struct Node **)malloc(sizeof(struct Node)*st->size);

   printf("\nStack with size %d is created\n",st->size);
}

// function for pushin an element to stack
void push(struct stack* st,struct Node* item)
{
   
   if (st->top == st->size-1)
   {
      printf("\nStack overflow");
   }

   else
   {
      st->top++;
      st->s[st->top] = item; 
   }
}

// function for poping an element from stack
struct Node* pop(struct stack* st)
{
   struct Node* x = NULL;

   if (st->top == -1)
   {

      printf("\nStack underflow");
   }    

   else
   {
     x = st->s[st->top];
     st->top--;
   }

   return x; 
}

// function for displaying stack 
void StackDisplay(struct stack *st)
{
   for (int i = st->top; i >= 0; i--)
   {

     printf("%d ",st->s[i]->data);
   }

   printf("\n");
}

// function to check whether stack is empty or not
int StackisEmpty(struct stack* st)
{
    if (st->top == -1)
    {
        return 1;
    } 

    return 0; 
}

// function to check whether stack is full or not
int isFull(struct stack* st)
{
   if (st->top == st->size-1)
   {
      return 1;
   } 

   return 0; 
}

// function to get the top entry of stack
struct Node* peek(struct stack* st)
{
    if (!StackisEmpty(st))
    {
        return st->s[st->top];
    }
    
    return NULL;
}

#endif