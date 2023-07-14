#include <stdio.h>
#include <stdlib.h>

// swap function
void swap(int *x,int *y)
{
   int temp = *x;
   *x = *y;
   *y = temp;
}

// function for partitioning
int partition(int A[],int l,int h)
{

    int i = l,j =h;
    int pivot = A[l];

    do {
        do 
        {
            i++;
        }
        while (A[i] <= pivot);

        do
        {

            j--;
        }
        while (A[j] > pivot);
        
        if (i < j)
        {
            swap(&A[i],&A[j]);
        }
    }
    while (i < j); 

    swap(&A[l],&A[j]); 
    return j;
}

// recursive function for Quick sort
void QuickSort(int A[],int l,int h)
{
   
  if (l < h)
  {
    int j = partition(A,l,h);
    QuickSort(A,l,j);
    QuickSort(A,j+1,h);
  }
}

// driver code
int main(int argc,int **argv)
{
   
   int  A[] = {11,13,7,12,16,9,24,5,10,3,__INT32_MAX__};
   int size = sizeof(A) / sizeof(int);

   // calling QuickSort function
   QuickSort(A,0,10);
   printf("\nArray after Quick sort is as follows\n");
   for (int i = 0; i < size-1; i++)
   {
      printf("%d ",A[i]);
   }

   return 0;
}