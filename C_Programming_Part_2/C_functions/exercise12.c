#include <stdio.h>

// function prototype
int matrixSum(int[][5],int,int);

int main()
{ 

    int row_no,col_no = 5;
    printf("\n Enter the row number: ");
    scanf("%d",&row_no);
    
    int matrix[row_no][col_no];
    // Taking an inpt for matrix entries
    for (int i = 0; i < row_no; i++)
    {
       for (int j = 0; j < 5; j++)
       {
          
          printf(" matirx[%d][%d] = ",i,j);
          scanf("%d",&matrix[i][j]);

       }
    }

    // calling the matrixSum function
    int sum = matrixSum(matrix,row_no,col_no);
    printf("\n Sum of matrix entries is: %d\n",sum);

    return 0; 
}

// function  computes the sum of matrix entries
int matrixSum(int matrix[][5],int row_no,int col_no)
{
      
      int total = 0;

      for (int i = 0; i < row_no; i++)
      {
        for (int j = 0; j < col_no; j++)
        {

             total += matrix[i][j];
        }
      }

      return total;
}