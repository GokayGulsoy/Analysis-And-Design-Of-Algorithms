#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *strToLower(char *,int);

int main()
{ 

   printf("\n Enter the length of the string: ");
   int str_len;
   scanf("%d",&str_len); 

   char str[str_len+1];
   printf("\n Enter any string: ");
   scanf("%s",str);

   printf(" Lower case string is: ");
   
   char *lower_str = strToLower(str,str_len);

   for (int i = 0; i < str_len; i++)
   {

       printf("%c",lower_str[i]);
   }
   
   printf("\n");

   return 0;
}

// function that turns string to lowercase
char *strToLower(char *str,int str_len)
{
                
        char string_lower[str_len+1];
        
        int j;
        for (j = 0; j < str_len; j++)
        {
        
             string_lower[j] = tolower(str[j]); 
        }

        string_lower[j] = '\0';
        
        // at the end of the for loop we will get the string in lowercase
        char *lower_str = string_lower;

        return lower_str;
}