#include <stdio.h>

// function prototype
int isPrime(int);

int main()
{

     int num,flag;
     printf("\n Enter any positive integer: ");
     scanf("%d",&num);

     // calling isPrime function
     flag = isPrime(num);
     
    if (flag == 1) 
    { 
      printf("\n %d is a prime number\n",num);
    }

    else
    {
        printf("\n %d is not a prime number\n",num);
    }

    return 0;
}

// function that finds whether a given number is prime or not
int isPrime(int number)
{   
    // smallest prime number is 2
     if (number == 1)
     {
         return -1;
     }

     for (int i = 2; i < number; i++)
     {
        if (number % i == 0)
        {

            return -1;
        }
     }

     return 1;
}