#include <stdio.h>
#include <string.h>
#include <ctype.h>

// function prototype
int strEqualsIgnoreCase(char *,char *);

int main()
{
      char str1[10],str2[10];
      printf("\n Enter the string 1: ");
      scanf("%s",str1);
      printf("\n Enter the string 2: ");
      scanf("%s",str2);

      // calling strEqualsIgnoreCase function
      int equal = strEqualsIgnoreCase(str1,str2);
      printf("\n%d\n",equal); 
     
      return 0;
}

// function that compares two string without case considerations
int strEqualsIgnoreCase(char *str1,char *str2)
{
    
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
   

    if (str1_len != str2_len)
    {

         return 0;
    }
    
    else 
    {

        for (int i = 0; i < str1_len; i++)
        {
           if (tolower(str1[i]) != tolower(str2[i]))
           {

            return 0;
           }
        
        }

        return 1;
    }
    
}