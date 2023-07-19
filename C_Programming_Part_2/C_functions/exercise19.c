#include <stdio.h>

// function prototype
int findGCDRecursive(int,int,int);

int main()
{

      int num1,num2;
      printf("\n Enter two integers: ");
      scanf("%d %d",&num1,&num2);

      int GCD = findGCDRecursive(num1,num2,num1);
      printf("\n GCD of %d and %d is: %d\n",num1,num2,GCD);      
      
      return 0; 
}
// function that finds the GCD of two integers recusrisevly
int findGCDRecursive(int num1,int num2,int num3)
{
    
    if (num2 % num3 == 0 && num1 % num3 == 0)
    {
       
         return num3;
    }  

    else
    {

        return findGCDRecursive(num1,num2,num3-1);
    }
}