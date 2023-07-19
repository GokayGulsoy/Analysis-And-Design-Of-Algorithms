#include <stdio.h>


int my_strcmp(char *,char *);

int main()
{
    
    char str1[20],str2[20];
    printf("\n Enter string 1: ");
    fgets(str1,sizeof(str1),stdin);
    printf("\n Enter the string 2: ");
    fgets(str2,sizeof(str2),stdin);

    char *str1_ptr = str1;
    char *str2_ptr = str2;
    
    int equal = my_strcmp(str1_ptr,str2_ptr);
    printf(" %d\n",equal);

    return 0;
}

// my_strcmp function with pointers
int my_strcmp(char *str1,char *str2)
{

     int str_len1 = 0,str_len2 = 0;
     
     while (*str1 != '\0')
     {

        str_len1++;
        str1++;
     }

     while (*str2 != '\0')
     {

         str_len2++;
         str2++;
     }

     // at the end of the while loop
     // we will get the length of strings
     if (str_len1 != str_len2)
     {

        return 0;
     } 

     else 
     {
         
         str1 = str1-str_len1;
         str2 = str2 - str_len2;
         // making character by character comparison
         while (*str1 != '\0')
         {  
             if (*str1 != *str2)
             {

                return 0;
             }
            str1++;
            str2++;

         } 
        
       return 1;
     }
}