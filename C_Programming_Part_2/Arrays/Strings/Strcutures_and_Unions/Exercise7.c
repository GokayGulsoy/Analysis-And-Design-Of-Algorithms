#include <stdio.h>


struct Name 
{
    
    char first_name[20];
    char middle_name[20];
    char last_name[20];
};

struct Address
{
   
     char area[20];
     char city[20];
     char state[20];
};

struct Employee 
{

   char emp_Id[20];
   int age;
   float salary;
   char desg[20]; 
   struct Name emp_name;
   struct Address emp_address;
};

int main() 
{
     // Declaring an array of structs 
     struct Employee *emp_arr[10];
     int n; 

     printf("Enter the number of employees: "); 
     scanf("%d",&n);
     
     printf("Enter employee informations\n");
     for (int i = 0; i < n; i++)
     {      
        printf("Enter the first name of employee %d: ",i+1);
        scanf("%s",emp_arr[i]->emp_name.first_name);
        printf("\nENter the middle name of employee %d: ",i+1);
        scanf("%s",emp_arr[i]->emp_name.middle_name);
        printf("\nEnter the last name of employee %d: ",i+1);
        scanf("%s",emp_arr[i]->emp_name.last_name);   
        printf("\nEnter the id of employee %d: ",i+1);
        scanf("%s",emp_arr[i]->emp_Id);
        printf("\nEnter the Area that the employee %d lives: ",i+1);
        scanf("%s",emp_arr[i]->emp_address.area);
        printf("\nEnter the city that employee %d lives: ",i+1);
        scanf("%s",emp_arr[i]->emp_address.city);
        printf("\nEnter the state that employee %d lives: ",i+1);
        scanf("%s",emp_arr[i]->emp_address.state);
        printf("\nEnter the age of employee %d: ",i+1);
        scanf("%d",&emp_arr[i]->age);
        printf("\nEnter the salary of the employee %d",i+1);
        scanf("%f",&emp_arr[i]->salary);
        printf("\nEnter the designation of employee %d: ",i+1);
        scanf("%s",emp_arr[i]->desg);
     }

     // Displaying the info related to employees

     for (int i = 0; i < n; i++)
     {      
        printf("first name of employee %d is: %s",i+1,emp_arr[i]->emp_name.first_name);
        printf("\nmiddle name of employee %d is: %s",i+1,emp_arr[i]->emp_name.middle_name);
        printf("\nlast name of employee %d is: %s",i+1,emp_arr[i]->emp_name.last_name);
        printf("\nId of employee %d is: %s",i+1,emp_arr[i]->emp_Id);
        printf("\nArea that the employee %d lives is: %s",i+1,emp_arr[i]->emp_address.area);      
        printf("\nCity that employee %d lives is: %s",i+1,emp_arr[i]->emp_address.city);       
        printf("\nState that employee %d lives is: %s",i+1,emp_arr[i]->emp_address.state);      
        printf("\nAge of employee %d is: %d",i+1,emp_arr[i]->age); 
        printf("\nSalary of the employee %d is: %f",i+1,emp_arr[i]->salary);
        printf("\nDesignation of employee %d is: %s",i+1,emp_arr[i]->desg);
     }


     return 0;
}