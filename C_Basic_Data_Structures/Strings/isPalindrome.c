#include <stdio.h>
#include <string.h>

int isPalindrome(char *);

int main()
{

   char str[20]; 
   printf("\n Enter any string: ");
   scanf("%s",str);

   printf(" %d\n",isPalindrome(str));
}

// function to determine whether a string is palindrome or not
int isPalindrome(char *str)
{
     

   int str_len = strlen(str);
   char rev_str[str_len];

   int index = 0;

   for (int i = str_len-1; i >= 0 ;i--)
   {

       rev_str[index] = str[i];
       index++;
   }
   
   if (strcmp(str,rev_str) == 0)
   {

    return 1;
   }

   else 
   {

    return 0;
   }
} 











