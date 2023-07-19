#include <stdio.h>

int main(const int argc,char * argv[])
{

    char ch = 'a';
    // In ASCII table lowercase characters are 32 
    // greater than uppercase characters
    char uppercase_ch = ch - 32;
    printf("\n %c is converted to %c\n",ch,uppercase_ch);
   
    return 0;
}