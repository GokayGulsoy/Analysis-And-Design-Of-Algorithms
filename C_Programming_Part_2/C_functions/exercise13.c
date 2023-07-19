#include <stdio.h>

// function prototype
void displayRowAndColumnSum(int[][5],int,int);

int main(const int argc,char *argv[])
{   
    int row_no,col_no = 5;
    printf("\n Enter the row number of matrix: ");
    scanf("%d",&row_no);

    int matrix[row_no][col_no];
    // Taking an input for matrix entries
    for (int i = 0; i < row_no; i++)
    {
        for (int j = 0; j < col_no; j++)
        {

            printf(" matrix[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    
    // calling displayRowAndColumnSum function
    displayRowAndColumnSum(matrix,row_no,col_no);

    return 0;
}

// function to display row sum and column sum of matrix
void displayRowAndColumnSum(int matrix[][5],int row_no,int col_no)
{

     int row_sum = 0,col_sum = 0;

     for (int i = 0; i < row_no; i++)
     {
        row_sum = 0; 
        for (int j = 0; j < col_no; j++)
        {

             row_sum += matrix[i][j];
        }

        printf(" \nSum of row %d is: %d",i+1,row_sum);
     }

     printf("\n") ;
     for (int j = 0; j < col_no; j++)
     {
       col_sum = 0;
       for (int i = 0; i < row_no; i++)
       {

           col_sum += matrix[i][j];
       }

       printf(" \nSum of column %d is: %d",j+1,col_sum);
     }

     printf("\n");
}