#include <stdio.h>

int main(const int argc,char * argv[])
{
    
    int num1,num2;

    char operation;
    printf(" Choose opeartion to be done: ");
    scanf("%c",&operation);
    // Taking numbers form user
    printf("\n Enter first number: ");
    scanf("%d",&num1);
    printf(" Enter second number: ");
    scanf("%d",&num2);
    
    if (operation == '+')
    {
      printf("\n Result is %d + %d = %d",num1,num2,num1+num2);
    } 
    
    else if (operation == '-')
    {
        printf("\n Result is %d - %d = %d",num1,num2,num1-num2);
    }

    else if (operation == '*')
    {
        printf("\n Result is %d * %d = %d",num1,num2,num1*num2);
    }
    
    else if (operation == '/')
    {
        printf("\n Result is %d / %d = %d",num1,num2,num1/num2);
    }
    
    else if (operation == '%')
    {
        printf("\n Result is %d %% %d = %d",num1,num2,num1%num2);
    }

    else 
    { 
        printf("\n Invalid operation is given");
    }
    
    printf("\n");
    return 0;
}