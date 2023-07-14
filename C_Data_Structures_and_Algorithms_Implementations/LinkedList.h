#include <stdio.h>
#include <stdlib.h>

#ifndef LinkedList_h
#define LinkedList_h

// creating Node structure 
struct Node {
  
    int data;
    struct Node* next; 
};

struct Node* first = NULL;

// insertion into Linked List
void SortedInsert(struct Node **H ,int key)
{

    struct Node *t,*q=NULL,*p=*H;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = key;
    t->next = NULL; 

    if (*H == NULL)
    {
        *H = t;
        first = t;
    } 
    
    else
    {
      while (p && p->data < key)
      {
         q =p;
         p = p->next;
      }  

      if (p == first)
      {
          t->next = first;
          first = t; 
      } 
      
      else
      {
         t->next = q->next;
         q->next = t;
      }



    }
}

// function for seaching 
// on Linked List
struct Node* search(struct Node* p,int key)
{
   
   while (p != NULL)
   {
      if (key == p->data)
      {
         return p;
      }  
       
      p = p->next; 
   }

   return NULL; 
}

#endif 