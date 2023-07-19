#include <stdio.h>

int main()
{

    int row_no,column_no;
    printf("Enter the row number of matrix: ");
    scanf("%d",&row_no);

    printf("Enter the column number of matrix: ");
    scanf("%d",&column_no);

      
    // declaring matrix (2-d array)
    float matrix[row_no][column_no];

    printf("Enter the entries of matrix: "); 
    for (int i = 0; i < row_no; i++)
    {
        for (int j = 0; j < column_no; j++)
        {
          scanf("%f",&matrix[i][j]);
        }    
    }

     float total = 0;

     // looping through matrix entries
     for (int i = 0; i < row_no; i++)
     {
        for (int j = 0; j < column_no; j++)
        {
           
           if (i == j)
           {
               total += matrix[i][j];
           }
        }
     }
     
     // Displaying sum of diagonals and matrix itself 
     for (int i = 0; i < row_no; i++)
     {

          printf("\n"); 
          for (int j = 0; j < column_no; j++)
          {
                printf("%f\t",matrix[i][j]);
          }
     }

     printf("\nSum of diagonal entries is: %f",total);
     return 0;
    
}