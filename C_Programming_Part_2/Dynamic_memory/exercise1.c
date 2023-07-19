#include <stdio.h>
#include <stdlib.h>

// function prototypes
double findAverage(double *,int);
void findClosestThree(double *,double,int);

int main()
{

     int numbers;
     printf("\n How many numbers are you going to enter: ");
     scanf("%d",&numbers);

     // dyanmically allocating memory
     double *arr = (double *)malloc(numbers*sizeof(double));
     // Taking an input
     for (int i = 0; i < numbers; i++)
     {
       
        printf("\n Enter number %d: ",i+1);
        scanf("%lf",&arr[i]);
     }

     double avg = findAverage(arr,numbers);
     printf("\n Average of given numbers is: %lf",avg);
     findClosestThree(arr,avg,numbers);

    return 0;
}

// function to find the average of numbers
double findAverage(double *arr,int numbers)
{

       double total = 0;
       for (int i = 0; i < numbers; i++)
       {

            total += arr[i];
       }

       return total / numbers;
}

// function to find three closest numbers to average
void findClosestThree(double *arr,double avg,int numbers)
{
    
    int cycle = 0;
    int order = 1;

    while (cycle < 3)
    {
           
         int closest_index = 0;
         double closest_distance = avg-arr[closest_index];
         double closest = 0;

         for (int i = 0; i < numbers; i++)
         {
           
             if (arr[i] != -1 && abs(avg-arr[i]) <= closest_distance)
             {
               
               closest = arr[i];
               closest_distance = avg-arr[i];
               closest_index = i;
             } 
         }  

         // at the end of the for loop
         // we will find the current closest 
         // number to average
         printf("\n %d.closest number to average is: %.2f",order,closest);
         arr[closest_index] = -1;
         cycle++;
         order++;
    }
    printf("\n");
}
