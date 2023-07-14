#include <stdio.h>
#include <stdlib.h>

// creating Node structure 
struct Node {
  
    int data;
    struct Node* next; 
};

// defining head node of linked list
struct Node* head = NULL;

// creating a Linked List
void create(int arr[],int size)
{
  
   head = (struct Node* )malloc(sizeof(struct Node));
   struct Node *temp,*last;
   head->data = arr[0];
   head->next = NULL;
   last = head; 
    
   for(int i = 1; i < size; i++)
   {
       
       temp = (struct Node* )malloc(sizeof(struct Node));
       temp->data = arr[i];
       temp->next = NULL;
       last->next = temp;
       last = temp;
   }
}

// displaying Linked List iteratively
void display(struct Node *first)
{
    
    while (first != NULL)
    {
      printf("%d ",first->data);
      first = first->next;    
    }  
}

// displaying Linked List recursively 
void recursive_display(struct Node* first)
{
    if (first != NULL)
    {
       printf("%d ",first->data);
       recursive_display(first->next);  
    }
}

// counting the number of nodes in Linked List
int count_nodes(struct Node* first)
{
   
   int count = 0; 
   while (first != NULL)
   {
       count++;
       first = first->next; 
   } 

   return count;
}

// recursively counting nodes in Linked List
int recursive_count_nodes(struct Node* first)
{
   if (first != NULL)
   {
       return recursive_count_nodes(first->next) + 1; 
   }

   else 
   {
    return 0;
   } 
}

// summing the nodes in Linked List
int sum(struct Node* first)
{
   int sum = 0;
   while (first != NULL)
   {
      sum += first->data;
      first = first->next; 
   }

   return sum; 
}

// recusive sum of all nodes
int recursive_sum(struct Node* first)
{
   if (first != NULL)
   {
      return first->data + recursive_sum(first->next);
   }
   
   else 
   {
      return 0;
   }
}

// finding the maximum element in Linked List
int find_max_node(struct Node* first)
{
   int max = first->data;
    
   while (first != NULL)
   {
      if (first->data > max)
         max = first->data;
      
      first = first->next;
   }

   return max;
}

// recursive max function 
int recursive_max(struct Node* first)
{
   int max;  
   if (first->next == NULL)
   {
      return first->data;
   }
   
   max = recursive_max(first->next);
   if (max > first->data)
   {
      return max;
   } 

   else
   {
     return first->data;
   } 
}

// Linear search over Linked List
struct Node* linear_search(struct Node* first,int key)
{
    while (first != NULL)
    {
       if (first->data == key)
       {
           return first;
       }
    }     
     
    return NULL; 
}

// Recursive linear search over Linked List
struct Node* recursive_linear_search(struct Node* first,int key)
{
    
    if (first == NULL)
    {
        return NULL;
    }
    
    if (key == first->data)
    {
        return first;
    }
    
    return recursive_linear_search(first->next,key);
}

// insertion into Linked List
void insert(struct Node* first,int index,int data)
{
    
    struct Node* t;
    
    if (index < 0 || index > count_nodes(first))
    {
        return; 
    }
    
    t = (struct Node* )malloc(sizeof(struct Node));
    t->data = data;

    // insertion to beggining 
    if (index == 0)
    {
        t->next = head;
        head = t;
    }

    else
    {
       for (int i = 0; i < index-1;i++)
       {
            first = first->next;
       }
        
       t->next = first->next;
       first->next = t; 
    }
}

// deletion from a Linked List
int delete(struct Node* first,int index)
{
    struct Node *t;
    int x = -1;

    if (index < 0 || index > count_nodes(first))
    {
        return -1;
    }
    
    if (index == 0)
    { 
        t = head;
        x = first->data;
        printf("here");
        head = head->next;
        free(t);
       
        return x;
    }

    else
    {
      for (int i = 0; i < index-1; i++)
      {
         t = first;
         first = first->next;    
      }

      t->next = first->next;
      x = first->data;
      free(first); 
      
       return x;
    }
}

// function to remove duplicates from a Linked List
void remove_duplicates(struct Node* first)
{
   struct Node* q = first->next;

   while (q != NULL)
   {
       if (first->data != q->data)
       {
          first = q;
          q = q->next;
       }

       else
       {
          first->next = q->next;
          free(q);
          q = first->next;
       }  
   } 
}

// reverse function for Linked List
void reverse(struct Node* first)
{

   int *arr,i = 0;
   struct Node* temp = first;
   arr = (int *)malloc(sizeof(int)*count_nodes(first));

   while (temp != NULL)
   {
     
     arr[i] = temp->data;
     temp = temp->next;
     i++;
   }

   temp = first;
   i--;

   while (temp != NULL)
   {
       temp->data = arr[i];
       i--;
       temp = temp->next;
   }
}

// recursive reverse function 
void recursive_reverse(struct Node* first,struct Node* subseq)
{
    if (subseq != NULL)
    {
       
       recursive_reverse(subseq,subseq->next);
       subseq->next = first;
    }   
    
    else
    {
        head = first;
    }
}

// driver code
int main()
{
     
    int arr[5] = {3,4,7,9,1};
    create(arr,sizeof(arr)/sizeof(int));
    /*
    printf("Iterative traversal\n");
    display(head);
    printf("\nRecursive traversal\n");
    recursive_display(head);
    printf("\nNumber of nodes in linked list(iteratively)\n");
    printf("%d",count_nodes(head)); 
    printf("\nNumber of nodes in the Linked List(recursively)\n");
    printf("%d",recursive_count_nodes(head));
    printf("\nSum of all nodes in Linked list(iteratively)\n");
    printf("%d",sum(head));
    printf("\nSum of all nodes in Linked List(recursively)\n");
    printf("%d",recursive_sum(head));
    printf("\nMax element in Linked List(iteratively)\n");
    printf("%d",find_max_node(head));
    printf("\nMax element in Linked List(recursively)\n");
    printf("%d",recursive_max(head));
    //printf("\nSearching for element 3(iteratively)\n");
    
    
    if (linear_search(head,3))
    {
        printf("Search key is found");  
    } 

    else
    {
        printf("Search key is not found");
    }

    printf("\nSearching for element 3(recursively)\n");

    if (recursive_linear_search(head,25))
    {
        printf("Search key is found");  
    } 

    else
    {
        printf("Search key is not found");
    }
  
    printf("\nInserting 55 into linked list(at the beginning)\n");
    insert(head,0,55);
    display(head);

    printf("\nInserting 11 into linked list(at 3 position)\n");
    insert(head,3,11);
    display(head);

    printf("\nDeleting first element from linked list\n");
    printf("\nDeleted element is %d\n",delete(head,0));
    display(head);

    printf("\nDeleting the last element from linked list");
    printf("\nDeleted element is %d\n",delete(head,6));
    display(head);

    printf("\nRemoving duplicates from Linked List\n");
    remove_duplicates(head),
    display(head);  
    */

    printf("\nReversing the Linked List(iteratively)");
    reverse(head);
    display(head);

    printf("\nReversing the Linked List(recursively)");
    recursive_reverse(NULL,head);
    display(head);


    return 0; 
}