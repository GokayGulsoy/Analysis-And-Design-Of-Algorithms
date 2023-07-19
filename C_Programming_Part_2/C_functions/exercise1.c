#include <stdio.h>

// function prototypes
void findSmaller(int,int);
void findBigger(int,int);

int main()
{

     int num1,num2;
     // Taking input from user
     printf("\n Enter number 1: ");
     scanf("%d",&num1);
     printf("\n Enter number 2: ");
     scanf("%d",&num2);

     // calling findSmaller and findBigger functions
     findSmaller(num1,num2);
     findBigger(num1,num2);

     return 0;
}

// function that finds the smaller of two numbers
void findSmaller(int num1,int num2)
{
     
     if (num1 < num2)
     {
         printf("\n Smaller number is: %d\n",num1);
     }

     else
     {

        printf("\n Smaller number is: %d\n",num2);
     }
}

// function that finds the bigger of two numbers
void findBigger(int num1,int num2)
{
   
   if (num1 > num2)
   {

     printf("\n Bigger number is: %d\n",num1);
   }

   else
   {

     printf("\n Bigger number is: %d\n",num2);
   }  
}