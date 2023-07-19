#include <stdio.h>

int main(const int argc,char *argv[])
{
   
   int num1,num2;
   printf("\n Enter two integers: ");
   scanf("%d %d",&num1,&num2);

   printf("\n \"First number\" you have entered is: %d",num1);
   printf("\n \"Second number \" you have entered is: %d",num2);

   printf("\n %d %% %d = %d\n",num1,num2,num1%num2);

   return 0;
}