#include <stdio.h>

int main()
{

   // declaring an array 
   int array[5] = {0};
   array[1] = 10;
   array[3] = 5;

   // displaying an array
   for (int i = 0; i < 5;i++)
   {

     printf("%d\t",array[i]);
   }

   int temp = array[1];
   array[1] = array[3];
   array[3] = temp; 
   
   printf("\n");
   // displaying array after changing entries
   for (int i = 0; i < 5; i++)
   {

      printf("%d\t",array[i]);
   }

   return 0;

}