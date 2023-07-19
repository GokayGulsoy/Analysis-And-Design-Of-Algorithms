#include <stdio.h>

// function prototype
int findLCMRecursive(int,int,int);

int main()
{
    int num1,num2,bigger;
    printf("\n Enter two integers: ");
    scanf("%d %d",&num1,&num2);

    if (num1 > num2)
    {
        bigger = num1;
    }

    else
    {

        bigger = num2;
    }
    
    // calling findLCMRecursive function
    int LCM = findLCMRecursive(num1,num2,bigger);
    printf("\n LCM of %d and %d is: %d\n",num1,num2,LCM); 

    return 0;
}

// function that computes the LCM of two integers recursively
int findLCMRecursive(int num1,int num2,int num3)
{
    
    if (num3 % num1 == 0 && num3 % num2 == 0)
    {

        return num3;
    }

    else
    {

        return findLCMRecursive(num1,num2,num3+1);
    }
}