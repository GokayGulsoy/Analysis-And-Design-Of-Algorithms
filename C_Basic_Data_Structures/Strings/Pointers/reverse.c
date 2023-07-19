#include <stdio.h>

char *reverse(char *,char *);

int main()
{
   
   char str[20],copy_str[20];
   char *str_ptr = str;
   char *cpy_str = copy_str;
   printf("\n Enter any string: ");
   fgets(str,sizeof(str),stdin);
   
   char *rev_str = reverse(str,cpy_str);
  
  printf("\n");
  while (*rev_str != '\0')
  {
    
    printf("%c",*rev_str);
    rev_str++;
  }
  
  printf("\n");

   return 0;
}

// function to reverse a string using pointers
char *reverse(char *str,char *rev)
{
    
    char *ptr  = str;
    int str_len = 0;
    while (*str != '\0')
    {

        str_len++;
        str++;
    }  
    
    int prev_len = str_len;
    
    while (str_len >= 0)
    {

       *rev = *(ptr+str_len);
       str_len--;
       rev++;
    }

    *rev = '\0';
    return (rev-prev_len);
}