#include <stdio.h>

int main(const int argc,char *argv[])
{

    int num;
    printf("\n Enter any positive integer: ");
    scanf("%d",&num);

    int i = num;
    while (i > 0)
    {
       int j = 0; 
       while (j < i)
       {

          printf("*");
          j++;
       } 
       
       i--;
       printf("\n");
    }
     
    return 0;
}