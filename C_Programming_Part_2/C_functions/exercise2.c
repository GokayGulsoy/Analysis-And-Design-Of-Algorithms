#include <stdio.h>

// function prototype
int findSquare(int);

int main()
{

     int num;
     printf("\n Enter any integer: ");
     scanf("%d",&num);

     int squared_number = findSquare(num);
     printf("\n Square of number %d is: %d\n",num,squared_number);

     return 0;
}

// function that finds the square of number
int findSquare(int number)
{

    return (number*number);
}