#include <stdio.h>

void read_matrix(int mat[3][3])
{
 
      printf("Enter the entries of our matrix: ");
      for (int i = 0; i < 3; i++)
      {
      
          for (int j = 0; j < 3; j++)
          {
 
              scanf ("%d",&mat[i][j]);
          }
      }
}

int compute_even(int mat[3][3])
{
    
    int even_count = 0;
    for (int i = 0; i < 3; i++)
    {

         for (int j = 0; j < 3; j++)
         {

            if (mat[i][j] % 2 == 0)
            {

                even_count++;
            }
         }
    }

    return even_count;
}

int compute_odd(int mat[3][3])
{
    
    int odd_count = 0;
    for (int i = 0; i < 3; i++)
    {

       for (int j = 0; j < 3; j++)
       {

            if (mat[i][j] % 2 == 1)
            {
                odd_count += 1;
            }  
       }
    }
    
    return odd_count;
}

void copy_odds_and_evens(int mat[3][3],int odd_arr[],int even_arr[],int odd_size,int even_size)
{

    int even_count = 0,odd_count = 0; 
    for (int i = 0; i < 3; i++)
    {

       for (int j = 0; j < 3; j++)
       {
           if (mat[i][j] % 2 == 0)
           {

                    even_arr[even_count] = mat[i][j];
                    even_count++;
           } 

           else 
           {
                   odd_arr[odd_count] = mat[i][j];
                   odd_count++;
           }     
       }  
    } 
}

int main()
{

     int mat[3][3];
      
     read_matrix(mat);
     int odd_size = compute_odd(mat);
     int even_size = compute_even(mat);
     
     // declaring two 1 dimensional arrays
     int odd_arr[odd_size],even_arr[even_size];
     // filling odd array and even array
     copy_odds_and_evens(mat,odd_arr,even_arr,odd_size,even_size);

     // displaying odd and even arrays  
     printf("\nEntries of odd array are: ");    
     for (int i = 0; i < odd_size; i++)
     {
       
       printf("%d\t",odd_arr[i]); 
     } 


     printf("\nEntries of even array are: "); 
     for (int i = 0; i < even_size; i++)
     {

        printf("%d\t",even_arr[i]);
     } 

    return 0;
}