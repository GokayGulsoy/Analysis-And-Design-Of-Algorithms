#include <stdio.h>
#include <string.h>

void my_strcpy(char *,char *);

int main()
{
   
   char str1[20],str2[20];
   printf("\nEnter any string: ");
   scanf("%s",str1);

   // calling the my_strcpy function
   my_strcpy(str1,str2);

   int i = 0;
   while (str2[i] != '\0')
   {

     printf("%c",str2[i]);
     i++;
   }

   printf("\n");

   return 0;
}

void my_strcpy(char *str1,char *str2)
{
    
    int index = 0;
    while (*str1 != '\0')
    {

        str2[index] = *str1;
        str1++;
        index++;
    }

    str2[index] = '\0';
}