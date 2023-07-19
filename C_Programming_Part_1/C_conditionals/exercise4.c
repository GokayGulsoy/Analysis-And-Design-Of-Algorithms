#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(const int argc,char *argv[])
{

     int num1,num2;
     srand(time(NULL));
    
     num1 = rand()%6;
     num2 = rand()%6;

     if (num1 == 0)
     {
        num1 = 6;
     }

     if (num2 == 0)
     {
        num2 = 6;
     }
     
     if (num1 == num2)
     {

        printf("\n Face of Dices are same (%d and %d),Congratulations!!\n",num1,num2);
     }

     else
     {
      
        printf("\n NOT SAME sorry!!(%d and %d)\n",num1,num2);
 
     }

     return 0;
}