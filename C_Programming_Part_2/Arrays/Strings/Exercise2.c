#include <stdio.h>
#include <string.h>

int main()
{
    /*
     char str1[6],str2[6];
     printf("Enter the str1: ");
     scanf("%s",str1);
     printf("Enter the str2: ");
     scanf("%s",str2);
     // by using strcat function 
     printf("The concatenated string is: %s",strcat(str1,str2));
    */

     // Algorithm to concatenate two strings
     char str1[10],str2[10];
     printf("Enter the str1: ");
     scanf("%s",str1);
     printf("\nEnter str2: ");
     scanf("%s",str2);

    // declaring concta_str variable
    char concat_str[20];

    int i = 0,j = 0;

    while (str1[j] != '\0')
    {

        concat_str[i] = str1[j]; 
        i++;
        j++;
    }
    
    // copy str2 to concat_str
    j = 0;
    while (str2[j] != '\0')
    {
         
       concat_str[i] = str2[j];
       i++;
       j++;
    }

    j = 0;  
    printf("Concatenated string is: ");  
    while (j < i)
    {
           
        printf("%c",concat_str[j]);
        j++;
    }
      
    return 0;
    
}