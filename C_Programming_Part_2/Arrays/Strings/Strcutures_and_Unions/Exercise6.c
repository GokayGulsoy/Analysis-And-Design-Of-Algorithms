#include <stdio.h>

struct time 
{
  
     int hour;
     int minutes;
     int seconds;
};

// function prototypes
void add_times(struct time,struct time);
void subtract_times(struct time,struct time);

int main()
{

     // Declaring struct variables 
     struct time time1,time2;

     time1.hour = 10;
     time1.minutes = 20;
     time1.seconds = 50;

     time2.hour = 5;
     time2.minutes = 30;
     time2.seconds = 40;

     add_times(time1,time2);
     subtract_times(time1,time2); 
     return 0;
}

void add_times(struct time tm1,struct time tm2)
{

    struct time sum_time;

    sum_time.hour = tm1.hour + tm2.hour;
    sum_time.minutes = tm1.minutes + tm2.minutes;
    sum_time.seconds = tm1.seconds + tm2.seconds;
    
    if (sum_time.seconds > 60)
    {
       sum_time.minutes += 1;
       sum_time.seconds -= 60;
    }

    if (sum_time.minutes > 60)
    {
        sum_time.hour += 1;
        sum_time.minutes -= 60;
    } 
   
    printf("Sum of two times is: %dhrs %dmins %dsec",sum_time.hour,sum_time.minutes,sum_time.seconds);
}

void subtract_times(struct time tm1,struct time tm2)
{
   
   struct time subtracted_time;
 
   if (tm1.seconds < tm2.seconds)
   {
         tm1.minutes -= 1;
         tm1.seconds += 60; 
   }

   if (tm1.minutes < tm2.minutes)
   {
     
        tm1.hour -= 1;
        tm1.minutes += 60;
   }

   subtracted_time.hour = tm1.hour-tm2.hour;
   subtracted_time.minutes = tm1.minutes-tm2.minutes;
   subtracted_time.seconds = tm1.seconds - tm2.seconds;

   printf("\nSubtraction of two times is: %dhrs %dmins %dsec\n",subtracted_time.hour,subtracted_time.minutes,subtracted_time.seconds);
}




