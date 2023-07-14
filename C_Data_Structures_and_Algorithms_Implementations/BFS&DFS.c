#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

// Breadth-first-search traversal of graph
void BFS(int G[][7],int start,int n)
{
     int i = start;
     int visited[7] = {0};

     printf("%d ",i);
     visited[i] = 1;
     enqueue(i);
     
     while (!isEmpty())
     {
       
       i = dequeue();
       for (int j = 1; j < n; j++)
       {
           if (G[i][j] == 1 && visited[j] == 0)
           {
              printf("%d ",j);
              visited[j] = 1;
              enqueue(j); 
           }
       }
     }
}

// function for depth-first traversal 
// (recursive)
void DFS(int G[][7],int start,int n)
{

   static int visited[7] = {0};
   
   if (visited[start] == 0)
   {
     printf("%d ",start);
     visited[start] = 1;

     for (int j = 1; j < n; j++)
     {
         if (G[start][j] == 1 && visited[j] == 0)
         {
            DFS(G,j,n);
         } 
     }
   }
}

// driver code
int main()
{  
   // Graph represented by adjacency matrix
   int G[7][7] = {{0,0,0,0,0,0,0},
                  {0,0,1,1,0,0,0},
                  {0,1,0,0,1,0,0},
                  {0,1,0,0,1,0,0},
                  {0,0,1,1,0,1,1},
                  {0,0,0,0,1,0,0},
                  {0,0,0,0,1,0,0}};
    

    printf("\nBreadth-first traversal of graph\n");
    BFS(G,1,7);
    printf("\nDepth-first traversal of graph\n");
    DFS(G,4,7);  

    return 0;
}