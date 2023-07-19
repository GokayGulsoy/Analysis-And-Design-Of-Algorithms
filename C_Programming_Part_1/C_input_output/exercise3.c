#include <stdio.h>
#include <stdlib.h>

int main(const int argc,char *argv[])
{

    char ch;
    int i = 0;

    while (ch != 'x')
    {
       
       printf("\b\b\b");
       ch = getchar();

       i++;
       printf("%d",i);
    }
    
    printf("\nx has entered application has ended\n");
    return 0; 
}