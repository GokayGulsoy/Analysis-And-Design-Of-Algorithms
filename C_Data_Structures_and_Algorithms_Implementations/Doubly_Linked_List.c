#include <stdio.h>
#include <stdlib.h>

struct Node {
  
  int data;
  struct Node* next;
  struct Node* prev;
};

// head pointer of doubly Linked List
struct Node* head;

// creating a doubly linked list
void create(int arr[],int size)
{
     struct Node *last,*t;
     head = (struct Node* )malloc(sizeof(struct Node));
     head->data = arr[0];
     head->next = NULL;
     head->prev = NULL;
     last = head;

     for (int i = 1; i < size; i++)
     {
          
          t = (struct Node* )malloc(sizeof(struct Node));
          t->data = arr[i];
          t->next = last->next;
          t->prev = last;
          last->next = t;
          last = t;   
     }
}

// function for displaying a doubly linked list
void display(struct Node* first)
{
    while (first != NULL)
    {
        printf("%d ",first->data);
        first = first->next; 
    }
    printf("\n");
}

// function to find the length of linked list
int length(struct Node* first)
{
   int len = 0;
   while (first != NULL)
   {
       len++;
       first = first->next;   
   }
   
   return len;
}

// function for inserting a node to linked list
void insert(struct Node* first,int index,int x)
{
     
     struct Node* t;

     if (index < 0 || index > length(first))
     {
          return;
     }
     
     if (index == 0)
     {

         t= (struct Node* )malloc(sizeof(struct Node));
         t->data = x;
         t->prev = NULL;
         t->next = head;
         head->prev = t;
         head = t;
     }

     else
     {

        for (int i = 1; i < index; i++)
        {
            first = first->next;
        }
        
        t = (struct Node* )malloc(sizeof(struct Node));
        t->data = x;
        t->prev = first;
        t->next = first->next;

        if (first->next)
        {
            first->next->prev = t;
        } 

        first->next = t;
     }
}

// delete function for a doubly linked list
int delete(struct Node* first,int index)
{
    struct Node* temp;
    int x = -1;

    if (index < 0 || index > length(first))
    {

        return -1;  
    }

    if (index == 0)
    {
        temp = first;
        head = head->next;
        if (head)  
        {
            head->prev = NULL;
        } 

        x = first->data;
        free(temp);
    }
    
    else
    {
       for (int i = 0; i < index; i++)
       {
            
          first = first->next;
       }       

       first->prev->next = first->next;
       if (first->next)
       {
           first->next->prev = first->prev;
       }
       
       x = first->data;
       free(first);
    }
    
    return x; 
}

// reverse function for doubly linked list
void reverse(struct Node* first)
{
    struct Node* temp;
    
    while (first != NULL)
    {
      
       temp = first->next;
       first->next = first->prev;
       first->prev = temp;
       first = first->prev; 
       
       if (first && first->next == NULL)
       {
           head = first;
       }

    }
}

// driver code 
int main()
{

    int arr[5] = {10,20,30,40,50};
    create(arr,sizeof(arr)/sizeof(int));
    display(head);

    printf("\nInserting 55 into last position\n");
    insert(head,5,55);
    display(head); 


    printf("\nInserting 1 into first position\n");
    insert(head,0,2);
    display(head); 

    printf("\nDeleting 20 from linked list\n");
    delete(head,2);
    display(head);

    printf("\nReversed linked list is\n");
    reverse(head);
    display(head); 

    return 0;  
}