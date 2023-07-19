#include <stdio.h>

int main()
{
    int num;
    printf("\n Enter any positive integer: ");
    scanf("%d",&num);
    
    // checking odd or even
    if (num % 2 == 0)
    {
        printf("\n %d is even\n",num);
    }
    
    else
    {
        printf("\n %d is odd\n",num);
    }
    
    return 0;
}