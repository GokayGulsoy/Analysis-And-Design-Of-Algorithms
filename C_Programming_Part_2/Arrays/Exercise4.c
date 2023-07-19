#include <stdio.h>

void display_matrix(int mat[2][2])
{
  
    for (int i = 0; i < 2;i ++)
    {
       
       printf("\n");
       for (int j = 0; j < 2; j++)
       {

          printf("%d\t",mat[i][j]);
       }

    }
}

int main()
{

    // declaring array as pointer 
    int mat[2][2];

    // taking an input from user for matrix entries
    printf("Enter the entries of matrix: ");
    for  (int i = 0; i < 2;i++)
    {
        
        for (int j = 0; j < 2; j++)
        {
           
           scanf("%d",&mat[i][j]);
        }
    }

    // computing the sum of diagonal entries
    int total = 0;
    for (int i = 0; i < 2;i++)
    {

      for (int j = 0; j < 2; j++)
      {
          
          if (i == j)
          {

            int diagonal = mat[i][j];
            total += diagonal;
          }
      }
    }
    
    display_matrix(mat);

    // Displaying the sum of diagonal entries
    printf("\nSum of diagonal entries is: %d\n",total);
   
    return 0;
}