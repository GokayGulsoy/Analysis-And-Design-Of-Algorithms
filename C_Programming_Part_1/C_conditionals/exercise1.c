#include <stdio.h>

int main(const int argc,char *argv[])
{
     int num;
     printf("\n Enter any positive integer: ");
     scanf("%d",&num);

     // Deternining whether the given number is odd or even
     if (num % 2 == 0)
     {

        printf("\n %d is even number\n",num);
     }

     else
     {

        printf("\n %d is odd number\n",num);
     }
     
     return 0;
}