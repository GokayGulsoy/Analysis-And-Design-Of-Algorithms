#include <stdio.h>

// function prototype
void displayMaxEntries(int[][5],int,int);

int main(const int argc,char * argv[])
{
     
     int row_no,col_no = 5;
     printf(" Enter the number of rows: ");
     scanf("%d",&row_no);

     int matrix[row_no][col_no];
     
     // Taking an input for matrix entries
     for (int i = 0; i < row_no; i++)
     {
        for  (int j = 0; j < col_no; j++)
        {
            
            printf(" matrix[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
     }
     
     // calling displayMaxEntries function
     displayMaxEntries(matrix,row_no,col_no);

     return 0;
}

// function that finds the maximum entry in each row
// and in each column
void displayMaxEntries(int matrix[][5],int row_no,int col_no)
{

      int row_max,col_max;

      for (int i = 0; i < row_no; i++)
      {
         row_max = matrix[i][0];
         for (int j = 0; j < col_no; j++)
         { 
             if (matrix[i][j] > row_max)
             {

                row_max = matrix[i][j];
             }
         }
         
         printf(" \nMaximum entry of row %d is: %d",i+1,row_max);
      }

      printf("\n");

      for (int j = 0; j < col_no; j++)
      {   
          col_max = matrix[0][j];
          for (int i = 0; i < row_no; i++)
          {
             if (matrix[i][j] > col_max)
             {

                col_max = matrix[i][j];
             }
          }

          printf(" \nMaximum entry of column %d is: %d",j+1,col_max);
      }

      printf("\n");
}