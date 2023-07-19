#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(const int argc,char *argv[])
{

     char str[20];
     printf("\n Enter any string: ");
     fgets(str,sizeof(str),stdin);

     int sum = 0;
     int i = 0;
     
     while (str[i] != '\0')
     {
        if (isdigit(str[i]) != 0)
        {
           switch (str[i])
           {

              case '1':
                 sum += 1;
                 break;
              case '2':
                 sum += 2;
                 break;  
              case '3':
                 sum += 3;
                 break;
              case '4':
                 sum += 4;
                 break; 
              case '5':
                 sum += 5;
                 break;
              case '6':
                 sum += 6;
                 break;
              case '7':
                 sum += 7;
                 break;
              case '8':
                 sum += 8;
                 break;         
              case '9':
                 sum += 9;
           }           
        }
         
        i++;
     }
     
     printf("\n Sum of numeric characters is: %d\n",sum);
     return 0;
}