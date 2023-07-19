#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strToUpper(char *);

int main()
{
    printf("\n Enter the length of the string: ");
    int len_str;
    scanf("%d",&len_str);
    char str[len_str]; 
    printf("\n Enter any string: ");
    scanf("%s",str);

    printf(" Uppercase string is: %s\n",strToUpper(str));
    
    return 0;
}

// function for converting string to uppercase 
char *strToUpper(char *str)
{
        int len_str = strlen(str);
        char upper_str[len_str];

        for (int i = 0; i < len_str; i++)
        {

            upper_str[i] = toupper(str[i]);
        }

        // at the end of the for loop we will get the uppercase string
        char *str_upper = upper_str;
        
        return str_upper;
}












