#include <stdio.h>

// function prototype
int computeNthTreboniacciRecursive(int);

int main()
{
   
    int n;
    printf("\n From beggining which fiboniacci number do you want to compute: ");
    scanf("%d",&n);

    // calling computeNthFiboniacciRecursive function
    int N = computeNthTreboniacciRecursive(n);
    printf("\n %d.fiboniacci number is: %d\n",n,N);

    return 0;

}

// function that computes Nth Treboniacci sequence number recursively
int computeNthTreboniacciRecursive(int n)
{

     if (n == 1 || n == 2 || n == 3)
     {
      
       return 1;
     }

     else
     {

       return computeNthTreboniacciRecursive(n-1)+computeNthTreboniacciRecursive(n-2)+
       computeNthTreboniacciRecursive(n-3);
     }
}