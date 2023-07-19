#include <stdio.h>

int main(unsigned char argc,char **argv)
{

   unsigned char a = 224; // 11110000
   printf("%d\n",a >> 2);
 
   a = a << 1;
   printf("%d\n",a);

   a += a >> 3;
   printf("%d\n",a);

   return 0;
}