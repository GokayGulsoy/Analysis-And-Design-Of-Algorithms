#include <stdio.h>


int main()
{
     
     int row_no,col_no;

     printf("Enter the number of rows of a matrix: ");
     scanf("%d",&row_no);
     printf("Enter the number of columns of a matrix: ");
     scanf("%d",&col_no);
     
     // declaring two-d matrix
     int matrix[row_no][col_no];
     
     // reading the entries of matrix from user
     printf("Enter the entries of a matrix: ");
     for (int i = 0; i < row_no; i++)
     {
         for (int j = 0; j < col_no; j++)
         {
            
            scanf("%d",&matrix[i][j]);
         }
     }

     // initializing an accumulator
     int total = 0;

     for (int i = 0; i < row_no; i++)
     {
          for (int j = 0; j < col_no; j++)
          {
              if (i > j)
              {
                
                total += matrix[i][j];
              } 
          }
     }

    // Displaying the matrix 
    printf("\nMatrix you entered is as follows\n");
    for (int i = 0; i < row_no; i++)
    {
        printf("\n");
        for (int j = 0; j < col_no; j++)
        {

          printf("%d\t",matrix[i][j]);
        }
    }

    printf("\n\nSum of entries below the diagonal of matrix is: %d\n\n",total);  
    return 0;

}