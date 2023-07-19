#include <stdio.h>

int main()
{
     
   int num1,num2;

   printf("\n Enter two integers: ");
   scanf("%d %d",&num1,&num2);
   
   // determining bigger number
   if (num1 > num2)
   {
       printf("\n Bigger number is: %d\n",num1);
   }
   
   else
   {
      printf("\n Bigger number is: %d\n",num2);
   }

   return 0;

}