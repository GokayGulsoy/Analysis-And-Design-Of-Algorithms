#include <stdio.h>
#include <stdlib.h>
#include "BucketLList.h"

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

// function for Bucket/Bin sort
void BucketSort(int A[],int n)
{

    int i,j,max;
    struct Node **Buckets;
    max = findMax(A,n);

    Buckets = (struct Node **)malloc(sizeof(struct Node)*(max+1)); 
    for (i = 0; i < max+1; i++)
    {
        Buckets[i] = NULL;
    } 
    
    for (i = 0; i < n; i++)
    {
        insert(Buckets,A[i]);
    }
    
    i = 0,j = 0;
    while (i < max+1)
    {
       while (Buckets[i] != NULL)
       {
           A[j++] = delete(Buckets,i);
       }

       i++;     
    }
}

// driver code
int main(int argc, int **argv)
{

     int A[] = {11,13,7,12,16,9,24,5,10,3};
     int size = sizeof(A) / sizeof(int);

     // calling CountSort function
     BucketSort(A,size);
     printf("\nArray after Bucket sort is called is as follows\n");
     for (int i = 0; i < size; i++)
     {
        printf("%d ",A[i]);
     }
}