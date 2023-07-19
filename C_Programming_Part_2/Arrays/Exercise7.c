#include <stdio.h>

void read_array(int arr[],int size)
{
    
    printf("Enter the entries of array: ");
    for (int i = 0; i < size; i++)
    {

           scanf("%d",&arr[i]);
    }

}

int main()
{
    
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
     
    int arr[size];
    read_array(arr,size);

    // finding the largest element in array
     int max = arr[0],min = arr[0];
     for (int i = 1; i < size; i++)
     {
            if (arr[i] > max)
            {

                max = arr[i];
            }

            if (arr[i] < min)
            {

                min = arr[i];
            }
     }   
     
     // finding the second largest element in array
     int second_largest = arr[0],second_smallest = arr[0];
     if (max == arr[0])
     {
          
        second_largest = arr[1];
     }

     if (min == arr[0])
     { 

        second_smallest = arr[1];
     }    

     for (int i = 1; i < size; i++)
     {
          if (arr[i] > second_largest && arr[i] != max)
          {
               second_largest = arr[i];
          }
          
          if (arr[i] < second_smallest && arr[i] != min)
          {

            second_smallest = arr[i];
          }
     } 

     int second_largest_index = 0,second_smallest_index = 0;  
     // locating the indices of second_largest and second_smallest 
     for (int i = 0; i < size; i++)
     {

          if (arr[i] == second_largest)
          {
            second_largest_index = i;

          }
          
          if (arr[i] == second_smallest)
          {

            second_smallest_index = i;
          }
     }     

     int *ptr_second_largest = &arr[second_largest_index];
     int *ptr_second_smallest = &arr[second_smallest_index];

     printf("Second largest element of array is: %d",*ptr_second_largest);
     printf("\nSecond smallest element of array is: %d\n",*ptr_second_smallest); 

}