#include <stdio.h>

int isPalindrome(char *,char *);

int main()
{

   char str[20],rev_str[20]; 
   char *ptr_str = str;
   char *ptr_rev = rev_str;
   printf("\nEnter any string: ");
   fgets(str,sizeof(str),stdin);

   // calling isPalindrome function
   int palindrome = isPalindrome(ptr_str,ptr_rev);
   printf("\n%d\n",palindrome);

   return 0;

}

// function to find whether the given string is palindrome or not
// by using pointers
int isPalindrome(char *str,char *rev_str)
{

   char *ptr = str;
   int str_len = 0;
   
   while (*str != '\0')
   {

        str_len++; 
        str++;
   }
    
   // at the end of the while loop we will get the 
   // length of the str string
   int prev_len = str_len;

   while (str_len >= 0)
   {
    
      *rev_str = *(ptr+str_len);
      printf("%c",*rev_str);
       rev_str++;
       str_len--;
   }

   *rev_str = '\0';
   // at the end of the while loop we will get the 
   // reversed string
   str = str-prev_len;
   rev_str = rev_str-prev_len;

// remove this part of code if you are working with tokenized strings
// strings (that contain spaces)  
/*
   while (*str != '\n')
   {
       str++;     
   }
*/
   *str = '\0';
    str = str-prev_len;
   
   while (*str != '\0')
   {
      // printf("%c",*str);
      if (*str != *rev_str) 
      {

        return 0;
      } 
      
      str++;
      rev_str++; 
   }

   return 1;

}