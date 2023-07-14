#include <stdio.h>
#define SIZE 10

int hash(int key)
{
    return key%SIZE;
}

// function that searches
// for a free space 
// (where collision doesn't occur)
int probe(int HT[],int key)
{
    int index = hash(key);
    int i = 0;

    while (HT[(index+i)%SIZE] != 0)
    {
        i++;
    }

    return (index+i)%SIZE;
}

// function for insertion
// to hash table
void insert(int HT[],int key)
{
     
     int index = hash(key);

     if (HT[index] != 0)
     {
        index = probe(HT,key);
     }
     
     HT[index] = key;
}  

// driver code
int main()
{
   
   int HT[10] = {0};
   insert(HT,12);
   insert(HT,25);
   insert(HT,35);
   insert(HT,45);
   insert(HT,95);
      
   return 0;
}