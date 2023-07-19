#include <stdio.h>

// function prototypes
void findSmaller(double,double);
void findBigger(double,double);

int main()
{
      
      double num1,num2;
      printf("\n Enter first number: ");
      scanf("%lf",&num1);
      printf("\n Enter second number: ");
      scanf("%lf",&num2);

      // calling findSmaller and findBigger functions
      findSmaller(num1,num2);
      findBigger(num1,num2);
        
      return 0;
}

// function that finds the smaller of two numbers 
void findSmaller(double num1,double num2)
{

      if (num1 < num2)
      {
         printf("\n Smaller of numbers is: %.2lf\n",num1);
      }

      else
      {

        printf("\n Smaller of numbers is: %.2lf\n",num2);
      }
}

// function that finds the bigger of two numbers
void findBigger(double num1,double num2)
{
    
    if (num1 > num2)
    {
        printf("\n Bigger of numbers is: %.2lf\n",num1);
    }

    else
    {

        printf("\n Bigger of numbers is: %.2lf\n",num2);
    }
}