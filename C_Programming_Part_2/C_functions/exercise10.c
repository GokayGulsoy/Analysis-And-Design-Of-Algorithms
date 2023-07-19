#include <stdio.h>

// function prototypes
int findMaximumElement(int[],int);
int findMinimumElement(int[],int);

int main(int argc,char* argv[])
{
    
    int arr[5];
    printf("\n Enter elements in array\n");
    for (int i = 0; i < 5; i++)
    {

        printf(" Enter the %d.element: ",i+1);
        scanf("%d",&arr[i]);
    }

    int max = findMaximumElement(arr,5);
    int min = findMinimumElement(arr,5);

    printf("\n Maximum element in array is: %d",max);
    printf("\n Minimum element in array is: %d\n",min);
    
    return 0;    
}

// function that finds the minimum element in array
int findMinimumElement(int arr[],int length)
{
     int min = arr[0];

     for (int i = 1; i < length; i++)
     {
        if (arr[i] < min)
        {

            min = arr[i];
        }
     }

     return min;
}

// function that finds the maximum of array elements
int findMaximumElement(int arr[],int length)
{

      int max = arr[0];

      for (int i = 1; i < length; i++)
      {
          if (arr[i] > max)
          {

            max = arr[i];
          }
      }
     
     return max;
}