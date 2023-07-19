#include <stdio.h>

// function prototype
void findMinimumDiagonal(int[][3],int,int);

int main(const int argc,char *argv[])
{

       int matrix[3][3];
       int row_no = 3,col_no = 3;
       
       printf("\n Enter matrix entries\n");
       for (int i = 0; i < row_no; i++)
       {
           for (int j = 0; j < col_no; j++)
           {

                printf(" matrix[%d][%d] = ",i,j);
                scanf("%d",&matrix[i][j]);
           }
       }

       // calling findMinimumDiagonal function
       findMinimumDiagonal(matrix,row_no,col_no);

       return 0; 
}

// function that finds the minimum diagonal entry
void findMinimumDiagonal(int matrix[][3],int row_no,int col_no)
{
      
      int min_diag = matrix[0][0];

      for (int i = 0; i < row_no; i++)
      {
          for (int j = 0; j < col_no; j++)
          {
              if (i == j && matrix[i][j] < min_diag)
              {

                  min_diag = matrix[i][j];
              }
          }
      }

      printf("\n Minimum diagınal entry is: %d\n",min_diag);       
}