#include <stdio.h>

void display_array(int arr[])
{
     
     for (int i = 0; i < 5; i++)
     {
    
       printf("%d\t",arr[i]);
     }

     printf("\n");
}

int main() 
{

   int arr[5];

   // taking an input from user
   printf("Enter entries of your array: ");
   for (int i = 0; i < 5; i++)
   {

    scanf("%d",&arr[i]);
   }

   display_array(arr);
   
   int total = 0;
   for (int i = 0; i < 5; i++)
   {
      // finding the sum of squares of entries
      total += arr[i]*arr[i];
   }
  
   printf("Sum of squares of entries is: %d",total);
   return 0;

}






