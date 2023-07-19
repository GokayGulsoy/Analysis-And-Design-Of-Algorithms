#include <stdio.h>
#include <stdlib.h>

int main()
{
   
   int numbers = 2;
   int order1 = 0,order2 = 1;
   
   int *arr = (int *)malloc(numbers*sizeof(int));
   arr[0] = 25;
   arr[1] = 15;

   int pass = 0;
   while (pass < 9)
   { 

       int *new_arr = (int *)realloc(arr,(numbers+1)*sizeof(int));
       arr = new_arr;
       
       int total = 0;
       for (int i = 0; i < numbers; i++)
       {

           total += arr[i];
       }

       new_arr[numbers] = total;
       order1++;
       order2++;

       for (int i = 0; i < numbers; i++)
       {
        
        if (pass != 8)
        {
         printf("%d,",arr[i]);
        }
        
        if (pass == 8)
        { 
           if (i != numbers-1)
           {
            printf("%d,",arr[i]);   
           }
           
           else
           {
            printf("%d",arr[i]);
           }
        }
       }
    
       numbers++;
       pass++;
       printf("\n");
   }
   
   return 0;
}