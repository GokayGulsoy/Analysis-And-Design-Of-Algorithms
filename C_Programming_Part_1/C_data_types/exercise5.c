#include <stdio.h>

int main(const int argc,char *argv[])
{

     int num1=4,num2=8,num3=15,num4=16,num5=23,num6=42;
     int sum = num1+num2+num3+num4+num5+num6;

     printf("\n %d comprises %.2lf percent of sum",num1,((float)num1*100)/sum);
     printf("\n %d comprises %.2lf percent of sum",num2,((float)num2*100)/sum);
     printf("\n %d comprises %.2lf percent of sum",num3,((float)num3*100)/sum);
     printf("\n %d comprises %.2lf percent of sum",num4,((float)num4*100)/sum);
     printf("\n %d comprises %.2lf percent of sum",num5,((float)num5*100)/sum);
     printf("\n %d comprises %.2lf percent of sum\n",num6,((float)num6*100)/sum);
     
     return 0;
}