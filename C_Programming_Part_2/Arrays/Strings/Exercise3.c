#include <stdio.h>

int main()
{
       // declaring string (char array)  
       char str1[20],new_str[20];

       printf("Enter a string: ");
       fgets(str1,sizeof(str1),stdin);
       
       int i = 0,j = 0;
       while (str1[i] != '\0')
       {
        
           if (str1[i] == ' ')
           {

            i++;
           }

           else 
           {

             new_str[j] = str1[i];
             j++;
             i++;
           }
       }

       j = 0;
       printf("After removing trailing and leading witespaces string is: ");
       while (new_str[j] != '\0')
       {

           printf("%c",new_str[j]);
           j++;
       } 

       return 0;  

}