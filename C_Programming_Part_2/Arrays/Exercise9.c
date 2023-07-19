#include <stdio.h>

int main()
{
    
    int row_no,col_no;  
    // Taking an input from user
    printf("Enter the number of rows of a matrix: ");
    scanf("%d",&row_no);
    printf("Enter the number of columns of a matrix: ");
    scanf("%d",&col_no);

    // declaring two-d array matrix
    int matrix[row_no][col_no];

    printf("Enter the entries of a matrix: ");
    // reading the entries of a matrix from user
    for (int i = 0; i < row_no; i++)
    {  
         for (int j = 0; j < col_no; j++)
         {
          
               scanf("%d",&matrix[i][j]);
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

    // initializing an accumulator
    int total = 0; 

    for (int i = 0; i < row_no; i++)
    {
         for (int j = 0; j < col_no; j++)
         {
               if (i < j)
               {

                total += matrix[i][j];
               }
         }
    }

    printf("\n\nSum of elements above the diagonal is: %d\n",total);
    return 0;

}