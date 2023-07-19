#include <stdio.h>
#include <stdlib.h>

void displayEvensAndOdds(int *,int);

int main()
{

    int numbers;
    printf("\n How many numbers are you going to enter: ");
    scanf("%d",&numbers);

    // dynamically allocate memory
    int *arr = (int *)calloc(numbers,sizeof(int));
    // Taking an input from user
    for (int i = 0; i < numbers; i++)
    {
       
       printf("\n Enter entry %d: ",i);
       scanf("%d",&arr[i]);
    }

    // calling function displayEvensAndOdds
    displayEvensAndOdds(arr,numbers);

    return 0;
}

// function to list odd and even numbers
void displayEvensAndOdds(int *arr,int numbers)
{

    printf("\n List of even numbers");
    printf("\n ---------------------");
    
    for (int i = 0; i < numbers; i++)
    {
         if (arr[i] % 2 == 0)
         {

            printf("\n %d",arr[i]);
         }
    }
    
    printf("\n\n List of odd numbers");
    printf("\n -------------------");
    
    for (int i = 0; i < numbers; i++)
    {
         if (arr[i] % 2 != 0)
         {

            printf("\n %d",arr[i]);
         }
    }
    printf("\n");
}