#include <stdio.h>

// function prototype
int sumArray(int[],int);

int main()
{
    
     int arr[5];
     printf("\n Enter the element in array\n");
     for (int i = 0; i < 5; i++)
     {

         printf(" Enter the %d.element: ",i+1);
         scanf("%d",&arr[i]);
     }

     int sum = sumArray(arr,5);
     printf("\n Sum of array elements is: %d\n",sum);
     
     return 0;
}

// function that sums all the elements in array
int sumArray(int array[],int length)
{
     
     int sum = 0;
     for (int i = 0; i < length; i++)
     {

        sum += array[i];
     }

     return sum;
}