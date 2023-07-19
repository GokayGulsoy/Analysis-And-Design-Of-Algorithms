#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindromeIgnoreCase(char *);

int main()
{
    
    char str[20];
    printf("\nEnter any string: ");
    fgets(str,sizeof(str),stdin);

    printf("%d\n",isPalindromeIgnoreCase(str));

}

// function that determines whether string is palindrome without considering case issues
int isPalindromeIgnoreCase(char *str)
{
   
    int tokenized = -1,str_len = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {

         tokenized = 1;
         break;
        }
    }
   
    if (tokenized == 1)
    {

      int i = 0; 
      while (str[i] != '\0') 
      {

         str_len++;
         i++;
      }

      str_len++;
    }

    else 
    {

        int i = 0; 
        while (str[i] != '\n') 
        {

          str_len++;
          i++;
        }

        str_len++;
    }

     char lower_str[str_len];
      
     for (int i = 0; i < str_len-1; i++)
     {

          lower_str[i] = tolower(str[i]);
     }

     lower_str[str_len] = '\0';

     // at the end of this for loop we get the string is lowercase
     char rev_str[str_len];
     int index = 0;

     for (int i = str_len-2; i >= 0; i--)
     {

        rev_str[index] = lower_str[i];
        index++;
     }
     
     rev_str[index] = '\0';
     
     if (strcmp(lower_str,rev_str) == 0)
     {

        return 1;
     }

     else 
     {

        return 0;
     }
}