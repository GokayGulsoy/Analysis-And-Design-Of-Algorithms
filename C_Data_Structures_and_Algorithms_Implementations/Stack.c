#include <stdio.h>
#include <stdlib.h>
/*
   Array base implementation 
   of Stack ADT
*/

// struct representing the stack ADT
struct stack 
{
   int size;
   int top; 
   int *s; 
};

// function for creating a stack
void create(struct stack* st)
{
   
   printf("\nEnter the size of the stack: ");
   scanf("%d",&st->size);
   st->top = -1;
   st->s = (int *)malloc(sizeof(int)*st->size);

   printf("\nStack with size %d is created\n",st->size);
}

// function for pushin an element to stack
void push(struct stack* st,int item)
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
int pop(struct stack* st)
{
   int x = -1;

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
void display(struct stack *st)
{
   for (int i = st->top; i >= 0; i--)
   {

     printf("%d ",st->s[i]);
   }

   printf("\n");
}

// function to check whether stack is empty or not
int isEmpty(struct stack st)
{
    if (st.top == -1)
    {
        return 1;
    } 

    return 0; 
}

// function to check whether stack is full or not
int isFull(struct stack st)
{
   if (st.top == st.size-1)
   {
      return 1;
   } 

   return 0; 
}

// function to get the top entry of stack
int peek(struct stack st)
{
    if (!isEmpty(st))
    {
        return st.s[st.top];
    }
    
    return -1;
}

// driver code
int main(int argc,int **argv)
{
    struct stack st;
    create(&st);

    push(&st,10);
    push(&st,20); 
    push(&st,30);
    push(&st,40); 

    display(&st); 

    pop(&st);
    pop(&st); 
    
    printf("\nStack after two pop operations\n");
    display(&st);
    
    char* isEmp;
    printf("\nIs stack empty ?: %s",isEmp = isEmpty(st) ? "True" :"False");
    
    char* full;
    printf("\nTop entry of the stack is: %d",peek(st));
    printf("\nIs stack full ?: %s",full = isFull(st) ? "True" : "False");

    return 0;
};