#include <stdio.h>

// function prototype
int computeNthTreboniacci(int);


int main(const int argc,char *argv[])
{
        
    int n;
    printf("\n From beggining which Treboniacci number do you want to compute: ");
    scanf("%d",&n);

    // calling computeNthTreboniacci function
    int N = computeNthTreboniacci(n);
    printf("\n %d.number in Treboniacci sequence is: %d\n",n,N);

    return 0;
}

// function that computes the Nth number in Treboniacci sequence
int computeNthTreboniacci(int n)
{
   
   int prev_prev = 1,prev = 1,subs = 1;
   int temp;

   if (n == 1 || n == 2 || n == 3)
   {

     return 1;
   }

   for (int i = 0; i < n-3; i++)
   {
          
        temp = subs;
        subs = prev_prev+prev+subs;
        prev_prev = prev;
        prev = temp;  
   }
   
   return subs;
}