#include <stdio.h>
#include <ctype.h>

int main(const int argc,char  *argv[])
{

     int i = 0;
     char  str[20];
     printf("\n Enter any string: ");
     fgets(str,sizeof(str),stdin);
     
     printf(" ");
     while (str[i] != '\0')
     {
        if (isalpha(str[i]) != 0)
        {

            printf("%c",str[i]-32);
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