#include <stdio.h> 

void take_input(float arr[],int size)
 {
     
     printf("Enter the entries of 1-dimensional array: ");
     for (int i = 0; i < size; i++)
     {
          
          scanf("%f",&arr[i]);
     }
 }

void merge_arrays(float merged_array[],float arr1[],float arr2[],int merged_size,int size1,int size2)
{

   int merge_index = 0; 
   // copying arr1 to merged_array
   for (int i = 0; i < size1; i++)
   {

      merged_array[merge_index] = arr1[i];
      merge_index++; 
   }
     
   // copying arr2 to merged_array
   for (int i = 0; i < size2; i++)
   {

     merged_array[merge_index] = arr2[i];
     merge_index++;
   }
}

void display_arrays(float merged_array[],float arr1[],float arr2[],int merged_size,int size1,int size2)
{
       
       printf("arr1 is: ");
       for (int i = 0; i < size1; i++)
       {

          printf("%f\t",arr1[i]);
       }

       printf("\narr2 is: ");  
       for (int i = 0; i < size2; i++)
       {

        printf("%f\t",arr2[i]);
       } 
       
       printf("\nMerged array is: ");
       for (int i = merged_size-1; i >= 0; i--)
       {

        printf("%f\t",merged_array[i]);
       }
}

int main()
{    

    int size1,size2,merged_size;
     printf("Enter the size of array 1: ");
     scanf("%d",&size1);  
     
     printf("Enter the size of array 2: ");
     scanf("%d",&size2);

     merged_size = size1 + size2;  
     // declaring two 1-d arrays
     float arr1[size1],arr2[size2],merged_array[merged_size];
     
     // filling arrays with the input taken from user
     take_input(arr1,size1);
     take_input(arr2,size2);
    
     // calling merge_arrays function
     merge_arrays(merged_array,arr1,arr2,merged_size,size1,size2);

    // displaying each array and merged_array seperately
    display_arrays(merged_array,arr1,arr2,merged_size,size1,size2);

}