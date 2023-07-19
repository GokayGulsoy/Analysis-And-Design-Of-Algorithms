# include <stdio.h>

// function prototypes 
int findMinimum(int[],int);
int findNthMinimum(int[],int,int);

int main()
{
     
     int arr[5],n;
     printf("\n Enter array entries\n");
     for (int i = 0; i < 5; i++)
     {
      
         printf(" Enter %d.element: ",i+1);
         scanf("%d",&arr[i]);
     }
     
     printf("\n From beginning which smallest element do you want to find(0-4): ");
     scanf("%d",&n);
   

     // calling findNthMinimum function
     int nth_smallest = findNthMinimum(arr,5,n);
     printf("\n %d.smallest element is: %d\n",n,nth_smallest);

     return 0;
}

// function that finds the minimum element in array
int findMinimum(int arr[],int length)
{

      int min = arr[0];
      int min_index  = 0;

      for (int i = 0; i < length; i++)
      {
           if (arr[i] < min)
           {

              min = arr[i];
              min_index = i;
           }
       }

       return min_index;
}

// function that finds the Nth minimum entry
int findNthMinimum(int arr[],int length,int n)
{

     int i = 0;
     int min_index; 

     while (i < n-1)
     {

         min_index = findMinimum(arr,length);
         arr[min_index] = 10000;
         i++; 
     }
     
     // nth call of findMinimum function  gives us the Nth minimum element
     min_index = findMinimum(arr,length);

     return arr[min_index];
}