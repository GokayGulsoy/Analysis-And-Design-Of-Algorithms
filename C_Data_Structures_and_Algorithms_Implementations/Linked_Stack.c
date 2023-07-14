#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node 
{
   int data;
   struct Node* next;
};

struct Node* top = NULL;
//  function to push an element to stack
void push(int x)
{
     struct Node *t;
     t = (struct Node *)malloc(sizeof(struct Node));
     
     if (t == NULL)
     {
        printf("\nStack if full");
     }

     else
     {
         t->data = x;
         t->next = top;
         top = t;
     } 
}

// function to delete an element from an stack
char pop()
{
   struct Node *temp;
   int x = -1;

   if (top == NULL)
   {

      printf("\nStack is empty");
   }

   else
   {
      temp = top;
      x = temp->data;
      top = top->next;
      free(temp);
   }

   return x;
}

// function to display stack
void display()
{
   
   struct Node* p;
   p = top;

   while (p != NULL)
   {

    printf("%d ",p->data);
    p = p->next;
   }
  
   printf("\n");
}

// function to retrieve the top entry of stack
int peek()
{
 
   int x = -1;

   if (top == NULL)
   {

     printf("\nStack is empty");
   } 
   
   else
   {

     x = top->data;
   } 

   return x;
}

// function for paranthesis matching
int isBalanced(char* exp)
{
    char x; 
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i]);
        }

        else if (exp[i] == ')'|| exp[i] == '}' || exp[i] == ']') 
        {
           if (top == NULL)
           {
              return 0;
           }

           if (top->data == '(' && exp[i] == ')')   
           {
              pop();
           }

           else if (top->data == '{' && exp[i] == '}')
           {
              pop();
           }

           else if (top->data == '[' && exp[i] == ']')
           {
             pop();
           }

           else
           {
              return 0;
           }
        } 
    }

        if (top == NULL)
        {
            return 1;
        } 

        else
        {
            return 0;
        }
}

// function for getting precedence of char
int precedence(char x)
{
   
   if (x == '+' || x == '-')
   {
      return 1;
   }

   else if (x == '*' || x == '/')
   {
      return 2;
   }

   return 0;
}

// function for checking operand
int isOperand(char x)
{
   
   if (x == '+' || x == '-' || x == '*' || x == '/')
   {
      return 0;
   }
   
   return 1;
}

// function for conversion from infix to postfix
char* inToPost(char* infix)
{
     int i = 0,j = 0;
     char* postfix;
     int len = strlen(infix);
     postfix = (char *)malloc(sizeof(char)*(len+2)); 
     
     while (infix[i] != '\0')
     {
         
         if (isOperand(infix[i]))
         {

             postfix[j++] = infix[i++];
         }

         else
         {
            if (precedence(infix[i]) > precedence(top->data))
            {

               push(infix[i++]);
            }

            else
            {

               postfix[j++] = pop();
            }
         }
     }

     while (top != NULL)
     {

       postfix[j++] = pop();
     } 
     postfix[j] = '\0';
     return postfix;
}

// function for evalutaing postfix expression
int postfixEvaluate(char* postfix)
{
   int x1,x2;
   for (int i = 0; postfix[i] != '\0'; i++)
   {
      
      if (isOperand(postfix[i]))
      {
         push(postfix[i]-'0');
      }

      else
      {
          x2 = pop();
          x1 = pop();
          int res;

          switch(postfix[i])
          {

             case '+':
                  res = x1 + x2;
                  break;
             case '-':
                  res = x1 - x2;
                  break;
             case '*':
                  res = x1 * x2;
                  break;
             case '/':
                  res = x1 / x2;
                  break;                  
          }
          push(res);
      }
   }
   
   return top->data;
}

// driver code
int main(int argc,int **argv)
{
   
   /*
   char* exp = "{[(a+b)*(c-d)]}";
   if (isBalanced(exp))
   {
      printf("Balanced paranthesis");
   }
   
   else
   {
      printf("NOT balanced paranthesis");
   }

   printf("\nCreating stack with 10,20,30,40\n"); 
   push(10);
   push(20);
   push(30);
   push(40);
   display();

   printf("\nPoping two times\n");
   printf("poped element: %d\n",pop());
   printf("poped element: %d\n",pop());
   display();
   */

    /* INFIX TO POSTFIX 
   char* infix = "a+b*c-d/e";
   push('#');
   char* postfix = inToPost(infix);
   printf("%s",postfix);
   */

   char* postfix = "234*+82/-";
   printf("Evaluated postfix value is: %d",postfixEvaluate(postfix));

   return 0;
}