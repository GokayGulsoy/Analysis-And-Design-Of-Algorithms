#include <stdio.h>
#include <stdlib.h>

void listPrimes(int *,int);

int main()
{

    int numbers;
    printf("\n Enter how many numbers are you going to enter: ");
    scanf("%d",&numbers);

    int *arr = (int *)calloc(numbers,sizeof(int));
    // Taking an input from user
    for (int i = 0; i < numbers; i++)
    {
          
          printf("\n Enter the number %d: ",i+1);
          scanf("%d",&arr[i]);
    }

    listPrimes(arr,numbers);

    return 0;
}

// function to determine whether a given number is prime
void listPrimes(int *arr,int numbers)
{
      
     printf("\n List of prime numbers");
     // Algorithm to check whether a given
     // number is prime or not
     for (int i = 0; i < numbers; i++)
     {
        int flag = 0;
        for (int j = 2; j < arr[i]; j++)
        {
           
           if (arr[i] % j == 0  || arr[i] == 0) 
           {
            
            flag = -1;
           }
        }
        
        if (flag != -1)
        {

            printf("\n%d",arr[i]);
        }
     } 
     
     printf("\n");
}