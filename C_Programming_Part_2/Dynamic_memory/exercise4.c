#include <stdio.h>
#include <stdlib.h>

int main()
{

   int num1,num2;
   printf("\n Enter two numbers: ");
   scanf("%d %d",&num1,&num2);
   
   // daynamically alloacating memory
   int *arr = (int *)malloc(2*sizeof(int));
   arr[0] = num1;
   arr[1] = num2;

   // reallocating memory
   int *new_arr = (int *)realloc(arr,3*sizeof(int));
   int total = num1 + num2;

   new_arr[2] = total;
   printf(" %d + %d = %d\n",new_arr[0],new_arr[1],new_arr[2]);

   return 0;
}