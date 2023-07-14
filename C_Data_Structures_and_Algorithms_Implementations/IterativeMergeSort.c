#include <stdio.h>
#include <stdlib.h>

// function for merging 
void merge(int A[],int l,int mid,int h)
{

        int i = l,j = mid+1,k = l;
        int B[100] = {0};

        while (i <= mid && j <= h)
        {
            
            if (A[i] < A[j])
            {
                B[k++] = A[i];
                i++; 
            }

            else
            {
                B[k++] = A[j];
                j++;
            }
        }     
       
       for (;i <= mid; i++)
       {
           B[k++] = A[i];
       }

       for (;j <= h; j++)
       {
           B[k++] = A[j];
       }
       
       for (i = l; i <= h; i++)
       {
          A[i] = B[i];
       }  
}

// Iterative merge sort function
void IterativeMergeSort(int A[],int n)
{
   int p,l,h,mid,i;
   for (p = 2; p <= n; p = p * 2)
   {
      for (i = 0; i+p-1 <= n; i = i + p)
      {
           l = i;
           h = i+p-1;
           mid = (l+h) / 2;
           merge(A,l,mid,h);
      }
   }
   
   if ((p/2) < n)
   {
      merge(A,0,(p/2)-1,n);
   }
}

// driver code
int main(int argc,int **argv)
{

    int A[] = {11,13,7,12,16,9,24,5,10,3};
    int n = sizeof(A) / sizeof(int);
    IterativeMergeSort(A,n);  
    
    printf("\nArray after Merge sort function is called\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    
    return 0;
}