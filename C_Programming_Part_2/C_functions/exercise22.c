#include <stdio.h>

// function prototype
int computeNthFIboniacciRecursive(int);

int main()
{
    
    int n;
    printf("\n From beggining which fiboniacci number do you want to compute: ");
    scanf("%d",&n);

    // calling computeNthFiboniacciRecursive function
    int N = computeNthFIboniacciRecursive(n);
    printf("\n %d.fiboniacci number is: %d\n",n,N);

    return 0;
}

// function that computes th Nth element in fiboniacci sequence recursively
int computeNthFIboniacciRecursive(int n)
{

       if (n == 1 || n == 2)
       {

        return 1;
       }

       else
       {

        return computeNthFIboniacciRecursive(n-1) + computeNthFIboniacciRecursive(n-2);
       }
}