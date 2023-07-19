#include <stdio.h>

int main(int argc,char *argv[])
{

   int num;
   printf("\n Enter any positive integer: ");
   scanf("%d",&num);
   
   printf("\n do-while loop version\n");
   int i = 3;
   do
   {
    
    printf(" %d\n",i);
    i += 3;
   } while (i <= num);

   i = 3;
   printf("\n while loop version\n");
   while (i <= num)
   {

      printf("% d\n",i);
      i += 3;
   }
 
   return 0;
}