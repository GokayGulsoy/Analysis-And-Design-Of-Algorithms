#include <stdio.h>

// function prototype
int findPower(int,int);

int main()
{

    int num,power;
    printf("\n Enter any integer: ");
    scanf("%d",&num);
    printf("\n Enter power of integer: ");
    scanf("%d",&power);

    int powered_num = findPower(num,power);
    printf("\n %d to power %d is: %d\n",num,power,powered_num);

    return 0;
}

// function that finds the given power of given number
int findPower(int num,int power)
{
   
   int powered_num = 1;
   for (int i = 0; i < power; i++)
   {
     
      powered_num *= num;
   }

   return powered_num;
}