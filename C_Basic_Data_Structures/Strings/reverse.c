#include <stdio.h>
#include <string.h>

char *reverse(char *);

int main()
{ 
   
   char str[20];
   printf("\n Enter a string: ");
   scanf("%s",str);

    // calling reverse function
    printf(" reversed string is: %s\n",reverse(str));
   
   return 0;
}

// function to reverse a string
char *reverse(char *str)
{

    int index;
    int len_str = strlen(str);

    // declare a new string variable (char array)
    char reversed_str[len_str];
    for (int i = len_str-1; i >= 0; i--)
    {

         reversed_str[index] = str[i];
         index++;
    }
    
    char *rev_str = reversed_str;
    return rev_str;
}
