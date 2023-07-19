#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *strToUpper(char *);

int main()
{ 

     char str[20];
     printf("\n Enter any string: ");
     fgets(str,sizeof(str),stdin);

     char *str_ptr = str;
     // calling the strupper function 
     char *upper_str = strToUpper(str_ptr);
     printf("\n");

     return 0;
}

// function that converts string into uppercase 
char *strToUpper(char *str)
{

    char upper_str[20],return_str[20];
    char *upper_str_ptr = upper_str;
    int str_len = 0;

    while (*str != '\n')
    {
     
     *upper_str_ptr = toupper(*str);
      return_str[str_len] = *upper_str_ptr;
      str++;
      upper_str_ptr++;
      str_len++;
    }
     
    return_str[str_len] = '\0';
    int index = 0;
    while (return_str[index] != '\0')
    {

        printf("%c",return_str[index]);
        index++;
    }
    
    //printf("%c",return_str[index-1]);
    char *return_ptr =  return_str;

    // at the end of the while loop we will
    // get the string in uppercase from
    return return_ptr;
}