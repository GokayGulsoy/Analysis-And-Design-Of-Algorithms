#include <stdio.h>

// function prototypes
int isPrime(int);
void printPrimes(int);

int main()
{
    
    int upper_bound;
    printf("\n Enter upper bound for prime numbers: ");
    scanf("%d",&upper_bound);

    printPrimes(upper_bound);
    printf("\n");
    
    return 0;
}

// function that determines whether a given number is prime or not
int isPrime(int number)
{

    for (int i = 2; i < number; i++)
    {
         if (number % i == 0)
         {

            return 0;
         }
    }

    return 1;
}

// function that prints all prime numbers up until to given number
void printPrimes(int number)
{

    for (int i = 3; i < number; i++)
    {
         if (isPrime(i))
         {

            printf("\n%d",i);
         }
    }
}