#include <stdio.h>
#include <string.h>


int main()
{

   // "The" pattern to be checked 
   char str[20];
   int the_count = 0,i = 0;

   printf("Enter any string: ");
   fgets(str,sizeof(str),stdin);

   while (str[i] != '\0')
   {
       if (i <= strlen(str)-4)
       {
            if (str[i] == 't' && str[i+1] == 'h' && str[i+2] == 'e')
            {
                the_count++;
            } 
       }

       i++;
   }

   printf("Total number of times 'the' appers in the string is: %d",the_count);    
   return 0; 

}