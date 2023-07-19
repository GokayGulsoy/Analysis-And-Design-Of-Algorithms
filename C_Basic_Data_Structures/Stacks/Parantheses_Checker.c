#include <stdio.h>
#include <string.h>

#define MAX 20
int top = -1;
char st[MAX];
void push(char);
char pop();

int main()
{

    char exp[MAX],temp;
    int i,flag = 1;
    printf(" Enter an expression: ");
    fgets(exp,sizeof(exp),stdin);
    
    for (i = 0; i < strlen(exp); i++)
    {
          
          if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
             push(exp[i]);
          if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
          {
 
             if (top == -1)
             {
                flag = 0;
             }

             else
             {
    
                temp = pop();
                if (exp[i] == ')' && (temp == '{' || temp == '['))
                   flag = 0;
                if (exp[i] == '}' && (temp  == '(' || temp == '['))   
                   flag = 0;
                if (exp[i] == ']' && (temp == '(' || temp == '{'))
                   flag = 0;
             }

          } 
    }
    
    if (top >= 0)
    {  
        flag = 0;
    }

    if (flag == 1)
    {
       printf("\n Valid expression\n");
    }

    else
    {
        printf("\n Invalid expression\n");
    }

    return 0;
}

// function to push a character into stack
void push(char c)
{

     if (top == (MAX-1))
     {
        printf("\n STACK OVERFLOW"); 
     }
     
     else
     {
         top = top + 1;
         st[top] = c;
     }
}

// function to pop an element from stack 
char pop()
{
   
   if (top == -1)
   {
      printf("\n STACK UNDERFLOW");
   }
   
   else
   {
     return st[top--];
   }
}