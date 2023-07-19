#include <stdio.h>

// function prototype
int computeFactorial(int);

int main(int const argc,char *agrv[])
{

      int num;
      printf("\n Enter any integer: ");
      scanf("%d",&num);

      // calling computeFactorial function
      int factorial = computeFactorial(num);

      if (factorial == -1)
      {

        printf("\n Factorial is not defined for negative numbers!!\n");
      }

      else
      {

        printf("\n Factorial of %d is: %d\n",num,factorial);
      }
      
      return 0;
}

// function that computes the factorial of a number
int computeFactorial(int number)
{

      if (number < 0)
      {

         return -1;
      }

      int factorial = 1;
      for (int i = 1; i <= number; i++)
      {
         
         factorial *= i;
      }

      return factorial;
}