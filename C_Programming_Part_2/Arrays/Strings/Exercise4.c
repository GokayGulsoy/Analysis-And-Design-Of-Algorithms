#include <stdio.h>
#include <ctype.h> // ctype library also contains many useful string chekcing functions


int main()
{
   
      int upper = 0,lower = 0,digit = 0,special = 0;
      // declaring a char array
      char str[20];
       
      printf("Enter a string: ");
      fgets(str,sizeof(str),stdin);

      int i = 0;
    while (str[i] != '\0')
    {
          
          if (str[i] >= 'a' && str[i] <= 'z')
          {
              lower++;
          }

          else if (str[i] >= 'A' && str[i] <= 'Z')
          {
              upper++;
          } 
          
          else if (str[i] >= '0' && str[i] <= '9')
          {
              digit++;
          } 

          else // character is a special character 
          {
              special++;
          }

          i++;
    }
   
    // Dispalying total counts
    printf("Total number of uppercase characters is: %d",upper);
    printf("\nTotal number of lower case characters is: %d",lower);
    printf("\nTotal number of digits is: %d",digit);
    printf("\nTotal number of special characters is: %d\n\n",special-1);
    return 0;

}