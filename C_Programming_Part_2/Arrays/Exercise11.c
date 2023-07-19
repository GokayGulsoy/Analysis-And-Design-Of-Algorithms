#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int row1,col1,row2,col2;
    // Taking an input for rows and columns of matrices
    printf("Enter the number of rows of matrix1: ");
    scanf("%d",&row1);
    printf("Enter the number of columns of matrix1: ");
    scanf("%d",&col1);
    printf("Enter the number of rows of matrix2: ");
    scanf("%d",&row2);
    printf("Enter the number of columns of matrix2: ");
    scanf("%d",&col2);
    
    // checking whether the number of rows and number of columns are matching
    if (row1 != row2 || col1 != col2)
    {
       
       printf("Matrices must be equal in terms of their dimensions");
       exit(0); // aboring the program
    
    }

    // declaring matrices 
    int mat1[row1][col1],mat2[row2][col2];
    // Taking the entries of matrices as input
    printf("\nEnter the entries of matrix1: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {

             scanf("%d",&mat1[i][j]);
        }
    } 
    
    printf("\nEnter the entries of matrix2: ");
     for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {

             scanf("%d",&mat2[i][j]);
        }
    } 

    // Calculating 2*mat1+3*mat2
    int resultant_mat[row1][col1];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {

            resultant_mat[i][j] = 2*mat1[i][j]+3*mat2[i][j];
        }
    }
    
    // Displaying the resultant matrix
    printf("\nResultant matrix is as follows");
    for (int i = 0; i < row1; i++)
    {  
        printf("\n");
        for (int j = 0; j < col1; j++)
        {

             printf("%d\t",resultant_mat[i][j]);
        }
    } 
    
    printf("\n");
    return 0; 
}