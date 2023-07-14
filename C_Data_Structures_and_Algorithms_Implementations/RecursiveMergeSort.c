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
// recursive merge sort function
void MergeSort(int A[],int l,int h)
{
    int mid;
    if (l < h)
    {
       mid = (l+h) / 2;
       MergeSort(A,l,mid);
       MergeSort(A,mid+1,h);
       merge(A,l,mid,h); 
    }
}

int main(int argc,int **argv)
{

  int A[] = {11,13,7,12,16,11,9,24,5,10,3};
  int n = sizeof(A) / sizeof(int);

  // calling MergeSort function 
  MergeSort(A,0,n-1);

  printf("\nArray after recursive Merge sort is called\n");
  for (int i = 0; i < n; i++)
  {
     printf("%d ",A[i]);
  }

  return 0;
}