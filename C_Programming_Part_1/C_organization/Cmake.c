#include"interface.h"
#include <stdio.h>

int main()
{

    char str1[40],str2[20];
    printf("\n Enter any string 1: ");
    scanf("%s",str1);
    printf("\n Enter any string 2: ");
    scanf("%s",str2);
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);

    printf("\n Length of str1 is: %d",len1);
    printf("\n Length of str2 is: %d\n",len2);

    int i = my_strcmp(str1,str2);
    if (i == 1)
    {
        printf("\n str1 and str2 are equal");
    }

    else 
    {

        printf("\n str1 and str2 are NOT equal");
    }
    
    printf("\n ");
    my_strcat(str1,str2);
    i = 0;
    while (str1[i] != '\0')
    {
       
       printf("%c",str1[i]);
       i++;
    }
    
    printf("\n");

   return 0;
}
