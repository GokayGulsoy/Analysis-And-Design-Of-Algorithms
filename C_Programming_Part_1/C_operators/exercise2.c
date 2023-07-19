#include <stdio.h>

int main()
{

    int num1,num2;
    printf("\n Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    
    int dividend = num1 / num2;
    int remainder = num1 % num2;
    
    printf("\n Dividend is: %d",dividend);
    printf("\n Remainder is: %d\n",remainder);

    return 0;
}