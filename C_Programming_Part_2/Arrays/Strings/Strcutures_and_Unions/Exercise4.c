#include <stdio.h>
#include <malloc.h>

struct employee
{
   
    char name[20];
    float salary;
    char DOB[20];
};

int main()
{ 

    int n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    
    struct employee *emp_ptr[n];
    for (int i = 0; i < n; i++)
    {

       emp_ptr[i] = (struct employee *)malloc(sizeof(struct employee));
       printf("\nEnter the name of employee %d: ",i+1);
       scanf("%s",emp_ptr[i]->name);
       printf("Enter the salary of employee %d: ",i+1);
       scanf("%f",&emp_ptr[i]->salary);
       printf("Enter the date of birth of empoyee %d\n: ",i+1);
       scanf("%s",emp_ptr[i]->DOB);
    }

    // Displaying information of employees before editing  
    for (int i = 0; i < n; i++)
    {
          printf("\nEmployee %d information",i+1);
          printf("\nName of employee: %s",emp_ptr[i]->name);
          printf("\nSalary of the employee is: %.2f",emp_ptr[i]->salary);
          printf("\nDate of birth of employee is: %s",emp_ptr[i]->DOB);
    }

    int edit_num;
    printf("\nEnter the employee to be edited: ");
    scanf("%d",&edit_num);
    
    printf("\nEnter a new name for employee: ");
    scanf("%s",emp_ptr[edit_num-1]->name);
    printf("Enter a new salary for employee: ");
    scanf("%f",&emp_ptr[edit_num-1]->salary);
    printf("Enter a new date of birth (DOB) for employee: ");
    scanf("%s",emp_ptr[edit_num-1]->DOB);

    // Displaiyn gthe information of employees after editing the one employee  
    for (int i = 0; i < n; i++)
    {
          printf("\nEmployee %d information",i+1);
          printf("\nName of employee: %s",emp_ptr[i]->name);
          printf("\nSalary of the employee is: %.2f",emp_ptr[i]->salary);
          printf("\nDate of birth of employee is: %s\n",emp_ptr[i]->DOB);
    }
   
    return 0; 
    
 }