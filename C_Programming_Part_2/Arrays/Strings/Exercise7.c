#include <stdio.h>
#include <string.h>

int main()
{
    
    // declaring a string
    char str[30];
    printf("Enter any string: ");
    fgets(str,sizeof(str),stdin);

    // pattern to be checked 
    char pattern[30];
    printf("Enter pattern to be checked: ");
    fgets(pattern,sizeof(pattern),stdin);

    int i = 0,count = 0;
    // Pattern matching algorithm
    while (str[i] != '\0')
    { 
        int match_count = 0;
        if (i <= strlen(str)-strlen(pattern))
        {
           int j;
           for (j = 0; j < strlen(pattern)-1; j++)
           {
                if (str[i] == pattern[j])
                { 
                    match_count++;
                    if (match_count < strlen(pattern))
                    {

                        i++;
                    }
                }
                
                else 
                {
                  
                  break;
                }
           }

           if (match_count == strlen(pattern)-1)
           {
            
            count++;
           }
        }

        i++;
    }
    
    printf("Total number of times the pattern appears in string is: %d",count);
    return 0;

}