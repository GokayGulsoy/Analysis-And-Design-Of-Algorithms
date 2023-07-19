#include <stdio.h>
#include <stdlib.h>
#define TAKE_DEBT(n,byte_size) malloc(n*sizeof(byte_size))
#define PAY_DEBT(ptr) free(ptr)

int main()
{
    
    int n,*ptr;
    printf("\n How many bills you have to pay: ");
    scanf("%d",&n);
    
    ptr = (int *)TAKE_DEBT(n,sizeof(int));
    // Take an input from user
    for (int i = 0; i < n; i++)
    {
       
       printf("\n Enter the price of bill %d: ",i);
       scanf("%d",&ptr[i]);
    }
    
    // Computing the total bill
    int total_bill = 0;
    for (int i = 0; i < n; i++)
    {

        total_bill += ptr[i];
    }
    
    printf("Total bill that you have to pay is %d\n",total_bill);
    PAY_DEBT(ptr);

    return 0;
}