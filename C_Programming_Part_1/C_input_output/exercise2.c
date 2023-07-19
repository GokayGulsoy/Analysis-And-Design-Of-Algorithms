#include <stdio.h>

int main()
{
   
   char name[20];
   char surname[20];
   int age;

   printf("\n Enter your name: ");
   scanf("%s",name);
   printf("\n Enter your surname: ");
   scanf("%s",surname);
   printf("\n Enter your age: ");
   scanf("%d",&age);

   printf("\n---------------------");
   printf("\n Hello %s %s",name,surname);
   printf("\n----------------------");
   printf("\n Your name: %s",name);
   printf("\n Your surname: %s",surname);
   printf("\n Your age: %d",age);
   printf("\n----------------------\n");
    
   return 0;
}