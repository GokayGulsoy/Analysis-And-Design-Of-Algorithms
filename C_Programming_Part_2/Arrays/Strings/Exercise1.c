#include <stdio.h>

void display_string(char *string)
{
     
     printf("%s\n",string);

}


int main()
{

    // declaring string variables
    char str[6] = {'H','e','l','l','o','\n'};
    display_string(str);
}