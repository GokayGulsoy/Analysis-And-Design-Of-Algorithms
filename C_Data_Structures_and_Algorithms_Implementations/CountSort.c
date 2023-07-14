#include <stdio.h>
#include <stdlib.h>

// function max that finds
// the maximum element in array
int findMax(int A[],int n)
{
    int max = A[0];

    for (int i = 1; i < n; i++)
    { 
        if (A[i] > max)
        {
            max = A[i];
        } 
    }
    
    return max;
}
 
// function for Count sort
void CountSort(int A[],int n)
{
    int i,j,k,max,*C;
    max = findMax(A,n);
    C = (int *)malloc(sizeof(int)*(max+1));

    for (i = 0; i < max+1; i++)
    {
        C[i] = 0;
    } 
    
    for (i = 0; i < n; i++)
    {
        C[A[i]]++;
    }

    i = 0,j = 0;
    while (j < max+1)
    {
       if (C[j] > 0)
       {
          A[i++] = j;
          C[j]--; 
       }
       
       else
       {
          j++;
       }

    }
} 

// driver code
int main(int argc,int **argv)
{

     int A[] = {11,13,7,12,16,9,24,5,10,3};
     int size = sizeof(A) / sizeof(int);

     // calling CountSort function
     CountSort(A,size);
     printf("\nArray after Count sort is called is as follows\n");
     for (int i = 0; i < size; i++)
     {
        printf("%d ",A[i]);
     }

     return 0;
}