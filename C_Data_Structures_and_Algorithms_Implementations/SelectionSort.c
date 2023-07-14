#include <stdio.h>
#include <stdlib.h>

// function for swap
void swap(int *x,int *y)
{
   int temp = *x;
   *x = *y;
   *y = temp;
} 

// function for Selection sort
void SelectionSort(int A[],int n)
{
    int k; 
    for (int i = 0; i < n-1; i++)
    {
       for (int j = k = i; j < n; j++)
       {
          if (A[j] < A[k])
          {
            k = j;
          }
       }

       swap(&A[i],&A[k]); 
    }
}

// driver code
int main(int agrc,int **argv)
{
   
   int A[] = {11,13,7,2,6,9,13,24,5,10,3};
   int size = sizeof(A) / sizeof(int);

   SelectionSort(A,size);
   printf("\nArray after Selection sort is as follows\n");
   for (int i = 0; i < size; i++)
   {
      printf("%d ",A[i]);
   }

   return 0;
}