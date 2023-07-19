#include <stdio.h>
#include <ctype.h>

int main(const int argc,char *argv[])
{
     
     char str[20];
     printf("\n Enter any string: ");
     fgets(str,sizeof(str),stdin);

     int i = 0;
     printf("\n Uppercase string is: ");

     while (str[i] != '\0')
     {
      
        if (isalpha(str[i]) != 0)
        {

            str[i] = toupper(str[i]);
            printf("%c",str[i]);
        }  

        else if (isdigit(str[i]) != 0)
        {

            printf("%c",str[i]);
        }

        i++;  
     }

     printf("\n");
     return 0; 
}