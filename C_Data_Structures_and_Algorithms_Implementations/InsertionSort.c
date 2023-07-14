#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int A[],int n)
{
  
  int j,x;
  for (int i = 1; i<n; i++)
  {
     j = i-1;
     x = A[i];
     while (j > -1 && A[j] > x)
     {
        A[j+1] = A[j];
        j--;
     }

     A[j+1] = x; 
  }
}

// driver code
int main(int argc,int **argv)
{
   
   int A[] = {3,7,9,10,6,5,12,4,11,2};
   int size  = sizeof(A) / sizeof(int);
   
   InsertionSort(A,size);
   printf("\nArray after Insertion sort is as follows\n");
   for (int i = 0; i < size; i++)
   {
      printf("%d ",A[i]);
   }

   return 0;
}