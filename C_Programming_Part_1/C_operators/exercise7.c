#include <stdio.h>

int main()
{
   
   unsigned char a = 224; // 11110000
   unsigned char b = 0; // 00000000
   unsigned char c = 31; // 00001111

   unsigned char andResult1 = a & b;
   unsigned char andResult2 = a & c;

   unsigned char orResult1 = a | b;
   unsigned char orResult2 = a | c;
   
   unsigned char xorResult1 = a ^ b;
   unsigned char xorResult2 = a ^ c;

   unsigned char negA = ~a;
   unsigned char negB = ~b;
   unsigned char negC = ~c;

   printf("%d\n",andResult1);
   printf("%d\n",andResult2);
   printf("%d\n",orResult1);
   printf("%d\n",orResult2);
   printf("%d\n",xorResult1);
   printf("%d\n",xorResult2);
   printf("%d\n",negA);
   printf("%d\n",negB);
   printf("%d\n",negC);
}