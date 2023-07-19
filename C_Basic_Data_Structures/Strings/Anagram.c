#include <stdio.h>
#include <string.h>

int isAnagram(char *,char *);
int findCount(char *,char );


int main()
{
   
   char str1[20],str2[20];
   printf("\n Enter string 1: ");
   fgets(str1,sizeof(str1),stdin);

   printf(" Enter string 2: ");
   fgets(str2,sizeof(str2),stdin);

   printf(" %d",isAnagram(str1,str2));

   return 0;
}

// function that determines whether two strings are anagrams
int isAnagram(char *str1,char *str2)
{
     
     for (int i = 0; i < strlen(str1); i++)
     {

         int count1 = findCount(str1,str1[i]);
         int count2 = 0;

         for (int j = 0; j < strlen(str2); j++)
         {
            
            if (str1[i] != ' ' && str1[i] == str2[j])
            {
                 
                count2++;
            }
         }

         if (count2 == 0)
         {
            
            printf("Hello");
            return 0;
         }

         else if (count1 != count2)
         {

            return 0;
         }
     }

     return 1;     
}

int findCount(char *str,char ch)
{
    
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
         if (str[i] == ch)
         {

            count++;
         }
    }

    return count;
}