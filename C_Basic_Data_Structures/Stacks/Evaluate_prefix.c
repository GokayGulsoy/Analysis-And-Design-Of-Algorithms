#include <stdio.h>
#include <string.h>

int st[10];
int top = -1;
int pop();
void push(int);
int get_type(char c);

int main()
{
     
      char prefix[10];
      int i,len,val,op1,op2,res;
      printf("\n Enter the prefix expression: ");
      gets(prefix);
      len = strlen(prefix);     
      for (i = len-1; i >= 0; i--)
      {
           
            switch (get_type(prefix[i]))
            { 

                case 0:
                     val = prefix[i] - '0';
                     push(val);
                     break;
                case 1:
                    op1  = pop();
                    op2 = pop();
                    switch (prefix[i])
                    {
                    case '+':
                        res = op1 + op2;
                        break;
                    case '-':
                        res = op1 - op2;
                        break;
                    case '*':
                        res = op1 * op2;
                        break;
                    case '/':
                        res = op1 / op2;
                        break;   
                    }

                    push(res);    
                }
           
      }

      printf("\n RESULT = %d",st[0]);
      return 0;
}


// function to push an element at the top of the stack
void push(int val)
{
     top++;
     st[top] = val;
}

// function to pop an element from stack
int pop()
{
    return (st[top--]);
}

// function to get the type of a character 
int get_type(char c)
{

     if (c == '+' || c == '-' || c == '*' || c == '/')
     {
           return 1;
     }

     else 
     {
           return 0;
     }
}