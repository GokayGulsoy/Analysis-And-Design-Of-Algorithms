#include <stdio.h>
#include <math.h>

int main(const int argc,char *argv[])
{

   int i,j;

   for (i = 8; i >= 0; i--)
   {
      for (j = 4; j > fabs(i-4);j--)
      {

         printf("%d",j);
      }
      printf("\n");
   } 

   return 0;
}