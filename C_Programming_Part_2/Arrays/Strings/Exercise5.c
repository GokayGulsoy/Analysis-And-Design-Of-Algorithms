#include <stdio.h>


int main()
{

    // declaring a char array (string)
    char str[20],ch;
    printf("Enter any string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter character to be counted: ");
    scanf("%c",&ch);

    int ch_count = 0,i = 0;
    while(str[i] != '\0')
    {
           if (str[i] == ch)
           {
             ch_count++;
           } 
           i++;
    }
    
    // Printing the total number of occurences of a character 
    printf("Total number of occurences of %c is: %d\n",ch,ch_count);
    
    return 0;
 
}