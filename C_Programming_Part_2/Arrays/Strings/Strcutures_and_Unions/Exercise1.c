#include <stdio.h>

struct student
{ 
   // declaring the member of a structure 
   char name[20];
   float marks[3];
   char grade;
};

int main()
{

     // creating an variable of struct
     struct student stud1,stud2,stud3;

     printf("Enter the name of student 1: ");
     fgets(stud1.name,sizeof(stud1.name),stdin);
     printf("\nEnter the name of student 2: ");
     fgets(stud2.name,sizeof(stud2.name),stdin);
     printf("\nEnter the name of student 3: ");
     fgets(stud3.name,sizeof(stud3.name),stdin);

     // Taking marks for each student
     for (int i = 0; i < 3; i++)
     {
        printf("\nEnter a grade for student %d",i+1);
        for (int j = 0; j < 3; j++)
        {
            printf("\n\nEnter grade %d of student %d: ",j+1,i+1);
            
            if (i == 0)
            {
                scanf("%f",&stud1.marks[j]);
            }
            
            else if (i == 1)
            {

                scanf("%f",&stud2.marks[j]);
            }

            else 
            {

                scanf("%f",&stud3.marks[j]);
            }
        }
    }
    
    // Computing the aggregate
    float aggregate = 0;
    for (int i = 0; i < 3; i++)
    {

        aggregate += stud1.marks[i] + stud2.marks[i] + stud3.marks[i];       
    }
    
    // Displaying the name of student if student secured less than 40 percent of the aggregate
    float aggregate1,aggregate2,aggregate3;

    for (int i = 0; i < 3; i++)
    {
         
        aggregate1 += stud1.marks[i];
        aggregate2 += stud2.marks[i];
        aggregate3 += stud3.marks[i];
    }

    if (aggregate1 < aggregate * 0.4)
       printf("\nStudent with name %s secured less than 40 percent of the aggregate\n",stud1.name);
    if (aggregate2 < aggregate * 0.4)
       printf("\nStudent with name %s secured less than 40 percent of the aggregate\n",stud2.name);
    if (aggregate3 < aggregate * 0.4)
       printf("\nStudent with name %s scured less than 40 percent of the aggregate\n",stud3.name);    
    
    return 0;
}