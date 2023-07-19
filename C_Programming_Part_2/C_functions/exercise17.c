#include <stdio.h>

// function prototype
void sortMatrix(int[3][3]);

int main(const int argc,char * argv[])
{

      int mat[3][3];

      for (int i = 0 ; i < 3; i++)
      {
         for (int j = 0; j < 3; j++)
         {

            printf(" matrix[%d][%d] = ",i,j);
            scanf("%d",&mat[i][j]);
         }
      } 
      
      // calling sortMatrix function  
      sortMatrix(mat);

      return 0;
}

// function that sorts matrix in descending order
void sortMatrix(int mat[3][3]) 
{
       int sorted_matrix[3][3];
       int max_entry;
       int row_index = 0,col_index = 0;
       int counter = 0;
       int s_row_index = 0,s_col_index = 0;

       while (counter < 9)
       {
            max_entry = mat[0][0];
            int is_bigger_exist = 0; 
            for (int i = 0; i < 3; i++)
            {
               for (int j = 0; j < 3; j++)
               { 
                   if (mat[i][j] > max_entry)
                   {

                      max_entry = mat[i][j];
                      row_index = i;
                      col_index = j;
                      is_bigger_exist++;
                   }
               }
            }

            if (is_bigger_exist == 0)
            {
                
                row_index = 0;
                col_index = 0;
            }

            sorted_matrix[s_row_index][s_col_index] = max_entry;
             // printf("sorted_matrix[%d][%d] = %d",s_row_index,s_col_index,sorted_matrix[s_row_index][s_col_index]);
            mat[row_index][col_index] = -1;

            s_col_index++;

            if (s_col_index != 0 && (s_col_index) % 3 == 0)
            {

                s_row_index++;
            }

            if (s_col_index != 0 && (s_col_index) % 3 == 0)
            {

                s_col_index = 0;
            } 

            counter++;

            
       }

       // Displaying the sorted matrix
       for (int i = 0; i < 3; i++)
       {
          printf("\n");
          for (int j = 0; j < 3; j++)
          {

             printf(" %3d",sorted_matrix[i][j]);
          }
       }

       printf("\n");
} 