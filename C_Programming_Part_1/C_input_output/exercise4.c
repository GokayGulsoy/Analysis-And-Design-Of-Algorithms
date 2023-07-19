#include <stdio.h>

int main(const int argc,char *argv[])
{

   for (int i= 0; i <= 15; i++)
   {

     printf("\n Decimal value of %d is: %d",i,i);
     printf("\n Octal value of %d is: %o",i,i);
     printf("\n Hexadecimal value of %d is: %x",i,i);
   }

   return 0;
}