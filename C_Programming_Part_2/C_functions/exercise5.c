#include <stdio.h>

// function prototype
int findSquare(int);
int findPower(int,int);

int main()
{

    int num,power;
    printf("\n Enter any integer: ");
    scanf("%d",&num);
    printf("\n Enter the power of number: ");
    scanf("%d",&power);

    // calling findPower function
    int powered_num = findPower(num,power);
    printf("\n %d to power %d is: %d\n",num,power,powered_num);

    return 0;
}

// function that finds the square of number
int findSquare(int num)
{
  return (num*num);
}

// function that finds the power of given number
int findPower(int num,int power)
{

      int powered_num = num;
      int cycle = power / 2;
      
      for (int i = 0; i < cycle; i++)
      {

          powered_num = findSquare(powered_num);    
      }
      
      if (power % 2 == 0)
      {

        return powered_num;
      }

      else
      {

        powered_num *= num;
        return powered_num;
      }
}