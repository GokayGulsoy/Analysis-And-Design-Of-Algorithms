#include <stdio.h>

struct number
{

    float num1;
    float num2; 
    float num3;
};

int main()
{
     
     // declaring struct variable
     struct number num;

    // Taking members of struct from user
    printf("Enter number 1: ");
    scanf("%f",&num.num1);
    printf("Enter number 2: ");
    scanf("%f",&num.num2);
    printf("Enter number 3: ");
    scanf("%f",&num.num3);
     
     float min;
     if (num.num1 < num.num2)
     {
        min = num.num1;
     }
     
     else 
     {
       min = num.num2;
     }

     if (num.num3 < min)
     {
        min = num.num3;
     }

     // displaying minimum of three numbers 
     printf("Minimum of %.2f %.2f %.2f is: %.2f\n",num.num1,num.num2,num.num3,min);


}