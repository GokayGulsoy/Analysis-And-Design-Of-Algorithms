#include <stdio.h>

// function prototype
int computeNthFiboniacci(int);

int main()
{
    
    int n;
    printf("\n From beginning which fiboniacci element do you want to compute: ");
    scanf("%d",&n);

    // calling computeNthFiboniacci function
    int N = computeNthFiboniacci(n); 
    printf("\n %d.fiboniacci number is: %d\n",n,N); 

    return 0;
}

// function that computes Nth element in fiboniacci sequence
int computeNthFiboniacci(int n)
{    
     
      if (n == 1 || n == 2)
      {

          return 1;
      }

      int prev = 1,subs = 1,temp;

      for (int i = 0; i < n-2; i++)
      {
          temp = subs;
          subs = subs+prev;
          prev = temp;     
      }
      
      return subs;
}