#include <stdio.h>
#include <math.h>

int main(const int argc,char *argv[])
{
    
    int num;
    printf("\n Enter any positive integer: ");
    scanf("%d",&num);

    for (int i = -1; i < num && fabs(i) > 0; i--)
    {
       for (int j = 0; j < fabs(i); j++)
       {
             
          printf("*");
       }
        
        if (fabs(i) == num)
        {
            i = num;
        }

        printf("\n");
    } 
   
    return 0;
}