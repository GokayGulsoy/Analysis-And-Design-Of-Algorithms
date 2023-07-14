#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
   
   int temp = *x;
   *x = *y;
   *y = temp;
}

// function for Bubble sort
void BubbleSort(int A[],int n)
{  
    int flag;
    for (int i = 0; i < n-1; i++)
    {  
       flag = 0; 
       for (int j = 0; j < n-1-i; j++)
       {
          if (A[j] > A[j+1])
          {
            swap(&A[j],&A[j+1]);
            flag = 1;
          }      
        }
        
        if (flag == 0)
        {
            break;
        }
    }
}

// driver code
int main(int argc,int **argv)
{ 
   
   int A[] = {3,7,9,10,6,5,12,4,11,2};
   int size  = sizeof(A) / sizeof(int);
   
   BubbleSort(A,size);
   printf("\nArray after Bubble sort is as follows\n");
   for (int i = 0; i < size; i++)
   {

      printf("%d ",A[i]);
   }
   
   return 0;
}