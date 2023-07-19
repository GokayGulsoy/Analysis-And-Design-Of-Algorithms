#include <stdio.h>

int main(const int argc,char *argv[])
{
   
    int num1,num2;

    char operation;
    printf("\n Enter operation to be done: ");
    scanf("%c",&operation);
    
    printf("\n Enter first number: ");
    scanf("%d",&num1);
    printf("\n Enter second number: ");
    scanf("%d",&num2);
    
    int result,flag = 1;
    // switch-case statement
    switch (operation)
    {
       
       case '+':
          result = num1+num2;
          break;
       case '-':
          result = num1-num2;
          break;
       case '*':
          result = num1*num2;
          break;
       case '/':
          result = num1/num2;
          break;
       case '%':
          result = num1%num2;
          break;
       default:
          printf("\n Invalid operation is given!!!");
          flag = -1;
    } 
    
    if (flag != -1)
    {
        printf("\n %d %c %d = %d",num1,operation,num2,result);
    } 
    
    printf("\n");
    return 0;
}