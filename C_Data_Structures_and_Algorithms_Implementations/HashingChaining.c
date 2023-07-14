#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#define SIZE 10

// hash function
int hash(int key)
{
    return (key%SIZE);
}

// insertion to hash table
void insert(struct Node *H[],int key)
 {
    int index = hash(key);
    SortedInsert(&H[index],key);
 }

// driver code
int main()
{
   struct Node *H[SIZE];
   
   for (int i = 0; i < SIZE; i++)
   {
      H[i] = NULL;
   }
   
   insert(H,12);
   insert(H,22);
   insert(H,42);

   return 0;
}