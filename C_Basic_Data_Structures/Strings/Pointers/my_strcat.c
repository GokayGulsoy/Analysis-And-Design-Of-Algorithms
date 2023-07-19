#include <stdio.h>

void my_strcat(char *,char *,char *);

int main()
{
   
   char str1[20],str2[20],cat_str[40];
   printf("\n Enter string 1: ");
   scanf("%s",str1);
   printf("\n Enter string 2: ");
   scanf("%s",str2);
   
   my_strcat(str1,str2,cat_str);
   char *str_cat = cat_str;

   printf(" ");
   while (*str_cat !=  '\0')
   {

    printf("%c",*str_cat);
    str_cat++;
   }

   printf("\n");

   return 0;
}

// function for concatenation with pointers
void my_strcat(char *str1,char *str2,char *cat_str)
{

      while (*str1 != '\0')
      {
          
          *cat_str = *str1;
           cat_str++;
           str1++;  
      }
      
      // we will know from where we should concatenate at
      // the end of the while loop

      while (*str2 != '\0')
      {
         
        *cat_str = *str2;
         cat_str++;
         str2++;         
      }
 
      *cat_str = '\0';
} 