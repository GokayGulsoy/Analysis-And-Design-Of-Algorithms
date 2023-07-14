#include <stdio.h>
#include <stdlib.h>
/*
 This is an example of
 Max Heap implementation 
 by just changing the
 greater and less than
 operators in insert
 and delete subroutines
 Min Heap can also be 
 implemented.  
*/

// function for inserting an element to heap
void insert(int H[],int n)
{

   int i = n,temp;
   temp = H[i];
    
   while (i > 1 && temp > H[i/2])
   {
       H[i] = H[i/2];
       i = i / 2; 
   } 
    
    H[i] = temp;
}

// function for deleting an element from Heap
int delete(int H[],int n)
{
   
   int i,j,x,temp,val;
   // deleted value
   val = H[1];
   x = H[n];
   H[1] = H[n];
   H[n] = val;
   i = 1;
   j = 2*i;

   while (j < n-1)
   {
     if (H[j+1] > H[j])
     {
        j = j+1;
     } 
     
     if (H[i] < H[j])
     {
         temp = H[i];
         H[i] = H[j];
         H[j] = temp;
     }
     
     else
     {
        break;
     }
   }

   return val;
}

// driver code
int main()
{
   
   int H[] = {0,10,20,30,25,5,40,35};
   // 40,25,35,10,5,20,30

   for (int i = 2; i <= 7; i++)
   {
        insert(H,i);
   }

   for (int i = 7; i > 1; i--)
   {
      delete(H,i);
   }
   
   printf("\nHeap after inserting and deleting elements elements in array\n");
   printf("(Procedure known as Heap sort)\n");
   for (int i = 1; i <= 7; i++)
   {
      printf("%d ",H[i]);
   }

   return 0; 
}
