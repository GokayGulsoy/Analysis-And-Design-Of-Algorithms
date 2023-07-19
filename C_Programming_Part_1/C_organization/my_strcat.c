#include"interface.h"
#include <stdlib.h>
#include <string.h>

void my_strcat(char str1[],char str2[])
{
    
    int i;
    // getting the length of two strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // adding second string to the end of the first one
    for (i = 0; i < len2; i++)
    {

        str1[len1+i] = str2[i]; 
    }
    
    // adding null terminating charachter to the end of the str2
    str1[len1+i] = '\0';
}
