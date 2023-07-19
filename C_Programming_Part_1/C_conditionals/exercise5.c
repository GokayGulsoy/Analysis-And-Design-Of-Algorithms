#include <stdio.h>

int main()
{

    int num1,num2,num3,biggest;
    printf("\n Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    // Using ternary operator to find the biggest of three numbers
    (num1 > num2) ? (biggest = (num1 > num3)? num1: num3):(biggest = (num2 > num3)? num2: num3); 
    
    printf("\n Biggest of %d %d and %d is: %d\n",num1,num2,num3,biggest);
    return 0;
}