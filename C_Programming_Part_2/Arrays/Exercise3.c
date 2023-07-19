#include <stdio.h>

int main()
{
        // declaring two-dimensional array 
        int matrix[5][5],row,column;
        
        printf("Enter the number of rows: ");
        scanf("%d",&row);

        printf("Enter the number of columns: ");
        scanf("%d",&column); 

        // Taking entries of matrix from user
        for (int i = 0; i < row; i++)
        {
           for (int j = 0; j < column; j++)
           {

              printf("Enter the entries of matrix: ");
              scanf("%d",&matrix[i][j]);   
           }

        }

        int sum = 0;
        double mean = 0; 

        for (int i = 0; i < row; i++)
        {

           for (int j = 0; j < column; j++)
           {

               sum += matrix[i][j];
           }

        }
        
        // at the end of the for loops we will have found the sum of entries 
        // of the matrix

        mean = (double) sum / (row*column);
       
        // Displaying sum and mean of matrix entries
        printf("\nSum of matrix entries is: %d",sum);
        printf("\nMean of matrix entries is: %f",mean);

       return 0;
}