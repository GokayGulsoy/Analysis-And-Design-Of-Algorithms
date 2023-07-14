#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#include "Stack.h"

struct Node* root = NULL;

// function for creating a Binary Tree
void TreeCreate()
{
  struct Node *p,*temp;
  struct Queue q;
  int x;
  create(&q,100);
  root = (struct Node *)malloc(sizeof(struct Node));
  printf("\nEnter the value of root node: ");
  scanf("%d",&root->data);
  root->lchild = NULL;
  root->rchild = NULL;
  
  enqueue(&q,root);
  while (!QueueisEmpty(q))
  {
      
     p = dequeue(&q);
     printf("\nEnter left child of %d: ",p->data);
     scanf("%d",&x);

     if (x != -1)
     {
       
       temp = (struct Node *)malloc(sizeof(struct Node));
       temp->data = x;
       temp->lchild = NULL;
       temp->rchild = NULL;
       p->lchild = temp;
       enqueue(&q,temp);
     }
     
     printf("\nEnter right child of %d: ",p->data);
     scanf("%d",&x);

     if (x != -1)
     {
        
       temp = (struct Node *)malloc(sizeof(struct Node));
       temp->data = x;
       temp->lchild = NULL;
       temp->rchild = NULL;
       p->rchild = temp;
       enqueue(&q,temp);
     }
  }  
}

// recursive preorder traversal function
void preorder(struct Node* r)
{
   if (r != NULL)
   {
      printf("%d ",r->data);
      preorder(r->lchild);
      preorder(r->rchild);
   }
}

// function for postorder traversal
void postorder(struct Node* r)
{
   if (r != NULL)
   {
      postorder(r->lchild);
      postorder(r->rchild);  
      printf("%d ",r->data);  
   } 
}

// function for inorder traversal
void inorder(struct Node* r)
{
   if (r != NULL)
   {
     inorder(r->lchild);
     printf("%d ",r->data);
     inorder(r->rchild);
   }
}

// iterative version of preorder traversal
void Ipreorder(struct Node *p,struct stack* st)
{
   while (p != NULL || !StackisEmpty(st))
   {
       if (p != NULL)
       {
           printf("%d ",p->data);
           push(st,p);
           p = p->lchild;
          
       }
       
       else 
       {
         p = pop(st);
         p = p->rchild;
       }
   }
}

// Iterative version of inorder traversal
void Iinorder(struct Node* p,struct stack *st)
{

   while (p != NULL || !StackisEmpty(st))
   {
       if (p != NULL)
       {
           push(st,p);
           p = p->lchild;
          
       }
       
       else 
       {
         p = pop(st);
         printf("%d ",p->data);
         p = p->rchild;
       }
   }
}

// Level order traversal function
void Levelorder(struct Node* root)
{

   struct Queue q;
   create(&q,100);
   
   printf("%d ",root->data);
   enqueue(&q,root);

   while (!QueueisEmpty(q))
   {
     root = dequeue(&q);
     if (root->lchild)
     {
        printf("%d ",root->lchild->data);
        enqueue(&q,root->lchild);  
     }

     if (root->rchild)
     {
        printf("%d ",root->rchild->data);
        enqueue(&q,root->rchild); 
     }
   }
}

// function to count the number of nodes
int count(struct Node* root)
{

    if (root)
    {
       return count(root->lchild) + count(root->rchild) + 1; 
    }

    else
    {
        return 0;
    }
}

// counting leaf nodes in Binary Tree
int countLeafs(struct Node* root)
{
   
   if (root == NULL)
   { 
       return 0;
   }
   
   if (root->lchild == NULL && root->rchild == NULL)
   {
     return count(root->lchild) + count(root->rchild) + 1; 
   }
   
   else
   {
     return count(root->lchild) + count(root->rchild); 
   }
}

// function to find the height of Binary Tree
int height(struct Node* root)
{
    int x = 0,y = 0;
    if (root == NULL)
    {
       return 0;
    } 

    x = height(root->lchild);
    y = height(root->rchild);

    if (x > y)
    {
       return x+1;
    }

    else
    {
      return y+1;
    }
}

// driver code
int main(int argc,int **argv)
{
  
   TreeCreate();
   printf("\nPreorder traversal of Binary Tree\n");
   preorder(root);
   printf("\nPostorder traversal of Binary Tree\n");
   postorder(root);
   printf("\nInorder traversal of Binary Tree\n");
   inorder(root);
   struct stack st;
   Stackcreate(&st);
   printf("\nIterative preorder traversal of Binary Tree\n");
   Ipreorder(root,&st);
   printf("\nIterative inorder traversal of Binary Tree\n");
   Iinorder(root,&st);
   printf("\nLevel order traversal of Binary Tree\n");
   Levelorder(root);
   printf("\nNumber of nodes in Binary Tree is\n");
   printf("%d",count(root));
   printf("\nHeight of Binary Tree is\n");
   printf("%d",height(root));
   printf("\nNumber of leaf nodes in Binary Tree is\n");
   printf("%d",countLeafs(root));

   return 0;
}