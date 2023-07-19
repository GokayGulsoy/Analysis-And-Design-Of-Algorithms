#include <stdio.h>
#include <math.h>

// function prototypes
double findCircumference(double);
double findArea(double);

int main()
{
   
   double radius;
   printf("\n Enter the radius of cricle: ");
   scanf("%lf",&radius);
    
   double circumference = findCircumference(radius);
   double area = findArea(radius); 
   
   printf("\n Circumference of circle is: %lf",circumference);
   printf("\n Area of circle is: %lf\n",area);
   
   return 0; 
}

// function that finds the circumference of a circle
double findCircumference(double radius)
{
    return (2*M_PI*radius);
}

// function that finds the area of a given circle
double findArea(double radius)
{
   return (M_PI*radius*radius);
}