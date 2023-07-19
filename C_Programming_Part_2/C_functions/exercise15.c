#include <stdio.h>

// function prototype
void displayDiagonalSum(int[][3],int,int);

int main(const int argc,char *argv[]) 
{
      
      int matrix[3][3];
      int row_no = 3,col_no = 3;

      printf("\n Enter matrix entries\n");
      for (int i = 0; i < row_no; i++)
      {
           for (int j = 0; j < col_no; j++)
           {

               printf(" matirx[%d][%d] = ",i,j);
               scanf("%d",&matrix[i][j]);
           }
      }

      // calling displayDiagonalSum function
      displayDiagonalSum(matrix,row_no,col_no);

      return 0;
}

// function that displays the sum of diagonal entries 
void displayDiagonalSum(int matrix[][3],int row_no,int col_no)
{
         
        int diag_sum = 0;

        for (int i = 0; i < row_no; i++)
        {
            for (int j = 0; j < col_no; j++)
            {
                if (i == j)
                {

                    diag_sum += matrix[i][j];
                }
            }
        } 

        printf(" \n Sum of diagonal entries is: %d\n",diag_sum);
}