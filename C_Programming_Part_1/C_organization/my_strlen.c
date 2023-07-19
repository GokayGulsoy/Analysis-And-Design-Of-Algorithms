#include"interface.h"
#include <stdlib.h>

int my_strlen(const char str1[])
{
   
   int i = 0;
   while (str1[i] != '\0')
   {

     i++;
   }
   
   return i;
}
