#include <stdio.h>


int main(const int argc,char *argv[])
{
    
    int num;
    printf("\n Enter any positive integer: ");
    scanf("%d",&num);

    for (int i = 3; i <= num; i+=3)
    {

        printf(" %d \n",i);
    } 
     
    return 0; 
}