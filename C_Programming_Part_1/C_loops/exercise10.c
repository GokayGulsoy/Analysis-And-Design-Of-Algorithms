#include <stdio.h>

int main(const int argc,char *argv[])
{
     
         int num;
    printf("\n Enter any positive integer: ");
    scanf("%d",&num);

    for (int i = num; i > 0; i--)
    {   
          if (i % 2 == 0)
          {
             printf("\n");
             continue;
          }

        for (int j = 0; j < i; j++)
        {

          printf("*"); 
        }    
        
    }
    
    printf("\n");
    return 0;
}