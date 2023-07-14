#include <stdio.h>
#include <stdlib.h>

// Node structure for AVL Tree
struct Node 
{
   struct Node* lchild;
   int data;
   int height;
   struct Node* rchild;
};

struct Node* root = NULL;

// function for determining height
int NodeHeight(struct Node* p)
{
   int hl,hr;
   hl = (p && p->lchild)?p->lchild->height:0;
   hr = (p && p->rchild)?p->rchild->height:0;

   return hl>hr?hl+1:hr+1;
}

// function for finding balance factor
// Balance factor is (hl-hr)
int BalanceFactor(struct Node* p)
{
   int hl,hr;
   hl = (p && p->lchild)?p->lchild->height:0;
   hr = (p && p->rchild)?p->rchild->height:0;
   
   return hl-hr;
}

// LL Rotation function
struct Node* LLRotation(struct Node* p)
{
   
   struct Node* pl = p->lchild;
   struct Node* plr = pl->rchild;

   pl->rchild = p;
   p->lchild = plr;
   p->height = NodeHeight(p);
   pl->height = NodeHeight(pl);

   if (root = p)
   {
       root = pl;
   }

   return pl;
}

// LR Rotation function
struct Node* LRRotation(struct Node* p)
{
   
   struct Node* pl = p->lchild;
   struct Node* plr = pl->rchild;

   p->lchild = plr->lchild;
   pl->rchild = plr->rchild; 

   plr->rchild = p;
   plr->lchild =pl;

   if (root == p)
   {
      root = plr;
   }

   return plr;
}

// RR Rotation function
struct Node* RRRotation(struct Node* p)
{
   
   struct Node* pr = p->rchild;
   struct Node* prr = pr->rchild;

   p->rchild = pr->lchild;
   pr->lchild = p;
   p->height = NodeHeight(p);
   pr->height = NodeHeight(pr);
   
   if (root == p)
   {
     root = pr;
   }
   
   return pr;
}

// RL Rotation function
struct Node* RLRotation(struct Node* p)
{
   
   struct Node* pr = p->rchild;
   struct Node* prl = pr->lchild;

   p->rchild = prl->lchild;
   pr->lchild = prl->rchild;

   prl->lchild = p;
   prl->rchild = pr;
   p->height = NodeHeight(p);
   prl->height =NodeHeight(prl);

   if (root = p)
   {
      root = prl;
   }

   return prl;  
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

// recursive function for inserting a node
struct Node* Rinsert(struct Node* p,int key)
{
    
    struct Node* temp = NULL;
     
    if (p == NULL)
    {
       temp = (struct Node *)malloc(sizeof(struct Node));
       temp->data = key;
       temp->height = 1;
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

     p->height = NodeHeight(p);
     
     // rotations (LL,LR,RR,RL)
     if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild))
     {
        return LLRotation(p);
     }
     
     else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
     {
        return LRRotation(p);
     }  

     else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1)
     {
         return RRRotation(p);
     }

     else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
     {
         return RLRotation(p);
     }    
     
     return p;
}

// driver code
int main()
{
   /* LL Rotation
   root = Rinsert(root,10);
   Rinsert(root,5);
   Rinsert(root,2);
   printf("\nInorder traversal of AVL Tree After LL Rotation\n");
   */
    
   /* LR Rotation 
   root = Rinsert(root,50);
   Rinsert(root,10);
   Rinsert(root,20);
   printf("\nInorder traversal of AVL Tree After LR Rotation\n");
   inorder(root);  
   */
   
   /* RR Rotation
   root = Rinsert(root,10);
   Rinsert(root,20);
   Rinsert(root,30);
   printf("\nInorder traversal of AVL Tree After RR Rotation\n");
   inorder(root);  
   */

   // RL Rotation 
   root = Rinsert(root,20);
   Rinsert(root,28);
   Rinsert(root,25);
   printf("\nInorder traversal of AVL Tree After RL Rotation\n");
   inorder(root);  

   return 0; 
}