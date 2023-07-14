#include <stdio.h>
#include <stdlib.h>

#ifndef  BucketLList_h
#define  BucketLList_h

// creating Node structure 
struct Node {
  
    int data;
    struct Node* next; 
};

// insertion into Linked List
void insert(struct Node** buckets,int entry)
{

    struct Node *t,*q=NULL,*h = buckets[entry];
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = entry;
    t->next = NULL; 

    if (h == NULL)
    { 
        buckets[entry] = t;
    } 
    
    else
    {
      while (h != NULL)
      {
         q = h;
         h = h->next;
      }  

      q->next = t;
    }
}

// function for deleting
// element from linked list
int delete(struct Node** buckets,int i)
{
    
   struct Node *p = buckets[i];
   buckets[i] = buckets[i]->next;
   int data = p->data;
   free(p);
   return data;
}

#endif 