#include <stdio.h>
#include <stdlib.h>

// Node for BST (Binary Seach Tree)
struct Node 
{
  struct Node* lchild;
  int data;
  struct Node* rchild;
};

struct Node* root = NULL;

// Iterative function for inserting a node
void insert(int key)
{
   
   struct Node* temp = root;
   struct Node *r = NULL,*p;
   
   if (root == NULL)
   {
      p = (struct Node *)malloc(sizeof(struct Node));
      p->data = key;
      p->lchild = NULL;
      p->rchild = NULL;
      root = p;
      return;
   }
   
   while (temp != NULL)
   {
      r = temp;

      if (key < temp->data)
      {
        temp = temp->lchild;
      }
      
      else if (key > temp->data)
      {
         temp = temp->rchild; 
      }

      else
      {
         return;
      } 
   }

   p = (struct Node *)malloc(sizeof(struct Node));
   p->data = key;
   p->lchild = NULL;
   p->rchild = NULL;

   if (key < r->data)
   {
     r->lchild = p;
   }

   else
   {
     r->rchild = p;   
   }
}

//  function for searching a value in BST
struct Node* search(int key)
{
   struct Node* temp = root;

   while (temp != NULL)
   {  

      if (key == temp->data)
      {
        return temp;
      }
      
      if (key < temp->data)
      { 
          temp = temp->lchild;
      }

      else 
      {
          temp = temp->rchild;
      }
   }

   return NULL;
}

// function for finding height of BST
int height(struct Node *p)
{
  int x = 0,y = 0;

  if (p == NULL)
  {
     return 0;  
  }

  x = height(p->lchild);
  y = height(p->rchild); 
  return x>y?x+1:y+1;
}

// function for finding inorder-predecessor
// (rightmost node in left subtree)
struct Node* Inpre(struct Node* p)
{
    while (p->rchild != NULL)
    {
        p = p->rchild;
    }
    
    return p;
}

// function for finding inorder-successor
// leftmost node in right subtree
struct Node* Insucc(struct Node* p)
{
   
     while (p->lchild != NULL)
    {
        p = p->lchild;
    }
    
    return p;
}

// recursive function for inserting a node
struct Node* Rinsert(struct Node* p,int key)
{
    
    struct Node* temp = NULL;
     
    if (p == NULL)
    {
       temp = (struct Node *)malloc(sizeof(struct Node));
       temp->data = key;
       temp->lchild = NULL;
       temp->rchild = NULL;
       return temp;
    }


     if (key < p->data)
     {
        p->lchild = Rinsert(p->lchild,key);
     }    

     else if (key > p->data)
     {
        p->rchild = Rinsert(p->rchild,key);
     }
     
     return p;
}

// Recursive delete function for BST
struct Node* Rdelete(struct Node* p,int key)
{

   struct Node* q; 

   if (p == NULL)
   { 
      return NULL;
   }

   if (p->lchild == NULL && p->rchild == NULL)
   {
      if (p == root)
      {
          root = NULL;
      }
      
      free(p);
      return NULL;
   }

   if (key < p->data)
   {
      p->lchild = Rdelete(p->lchild,key);
   }
   
   else if (key > p->data)
   {
      p->rchild = Rdelete(p->rchild,key);
   }

   else
   {
      if (height(p->lchild) > height(p->rchild))
      { 
         q = Inpre(p->lchild);
         p->data = q->data;   
         p->lchild = Rdelete(p->lchild,q->data);  
      }
      
      else
      {
         q = Insucc(p->rchild);
         p->data = q->data;   
         p->rchild = Rdelete(p->rchild,q->data); 
      }
   }
   return p;  
}

// function for inorder traversal
void inorder(struct Node* p)
{
   if (p)
   {
      inorder(p->lchild);
      printf("%d ",p->data);
      inorder(p->rchild);
   }
}

int main()
{
   
   root = Rinsert(root,10);
   Rinsert(root,20);
   Rinsert(root,30);
   Rinsert(root,40);
   Rinsert(root,50);

   printf("\nInorder traversal of BST is\n");
   inorder(root);

   printf("\nInorder traversal of BST is\n");
   Rdelete(root,20);
   inorder(root);
   
   printf("\nSearching for 20 in BST\n");
   struct Node* temp;
   temp = search(50);

   if (temp != NULL)
   {
      printf("%d is found in BST",temp->data);
   }
  
   else
   {
     printf("element is not found");
   }
   
   return 0;
}