#include <stdio.h>

int st[10];
int top = -1;
int pop();
void push(int);

int main()
{
   
   int val,n,i;
   int arr[10];
   printf(" Enter the number of elements in the array: ");
   scanf("%d",&n);
   printf("\n Enter the elements of the array: ");

   for (i = 0; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }

   for (i = 0; i < n; i++)
   {
       push(arr[i]);
   }

   for (i = 0; i < n; i++)
   {

     val = pop();
     arr[i] = val;
   }

   printf("\n THe reversed array is: ");
   for (int i= 0; i < n;i++)
   {
      
      printf(" %d",arr[i]);
   }
   printf("\n");

   return 0;
}

// function to push an element at the top of an stack
void push(int val)
{
      st[++top] = val;
}

// function to pop an element from stack
int pop()
{
      return st[top--];
}