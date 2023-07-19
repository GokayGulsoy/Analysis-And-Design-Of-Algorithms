#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1,rear = -1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);


int main()
{

      int option,val;
      
      do 
      {
             
            printf("\n ***** MAIN MENU *****");
            printf("\n 1. Insert an element");
            printf("\n 2. Delete an element");
            printf("\n 3. Peek");
            printf("\n 4. Display the queue");
            printf("\n 5. EXIT");
            printf("\n Enter your option: ");
            scanf("%d",&option);

            switch (option)
            {
               
               case 1:
                   insert();
                   break;
                case 2:
                     val = delete_element();
                     if (val != -1)
                     {

                        printf("\n The number deleted is: %d",val);
                     }   
                     break;
                case 3: 
                     val = peek();
                     if (val != -1)
                     {

                        printf("\n The first value in queue is: %d",val);
                     }    
                     break;
                case 4:
                     display();
                     break;
            }

      } while (option != 5);

       return 0;
}

//function to insert an element to circular queue
void insert()
{
    
    int num;
    printf("\n Enter the number to be inserted in the queue: ");
    scanf("%d",&num);
    if (front == 0 && rear == MAX-1)
    {

        printf("\n OVERFLOW");
    }

    else if (front == -1 && rear == -1)
    {
         
         front = 0;
         rear = 0;
         queue[rear] = num;  
         printf("front is = %d,a and rear is = %d",front,rear);
    }

    else if (rear == MAX-1 && front != 0)
    {
         
         rear = 0;
         queue[rear] = num;
         printf("front is = %d,a and rear is = %d",front,rear);
    }
    
    else
    {
         rear++;
         queue[rear] = num;   
         printf("front is = %d,a and rear is = %d",front,rear);
    }
}

// function to delete an element from a circular queue
int delete_element()
{
    
    int val;

    if (front == -1 && rear == -1)
    {
         
         printf("\n UNDERFLOW");
         return -1; 
    }

    val = queue[front];
    if (front == rear)
    {

        front = rear = -1;
        printf("front is = %d,a and rear is = %d",front,rear);
    }
    
    else 
    {
        
        if (front == MAX-1)
        {
           
            front = 0;
            printf("front is = %d,a and rear is = %d",front,rear);
        }

        else 
        {

           front++;  
           printf("front is = %d,a and rear is = %d",front,rear);
        }
    }
  
    return val;
}

// retrieving the front entry of a queue
int peek()
{

    if (front == -1 && rear == -1)
    {
  
        printf("\n QUEUE IS EMPTY");
        return -1;   
    }   

    else 
    {

        return queue[front];
    }
}

// traversing the circular queue
void display()
{

    int i;
    if (front == -1 && rear == -1)
    {

        printf("\nQUEUE IS EMPTY");
    }
    
    else 
    {
           
         if (front < rear)
         { 
               
            for (i = front; i <= rear; i++)
            {
                  
               printf("\t %d",queue[i]);
            }

         }

         else 
         {
              
            for (i = 0; i <= rear; i++)
            {

                printf("\t %d",queue[i]);
            }  

            for (i = front; i <= MAX-1; i++)
            {

                printf("\t %d",queue[i]);
            }
         }
    }
}