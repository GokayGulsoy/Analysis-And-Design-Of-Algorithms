#include <stdio.h>
#include <math.h>

struct point
{

    double x;
    double y;
};

int main()
{

     // Declaring points
     struct point pt1;
     struct point pt2;

     pt1.x = 6;
     pt1.y = 3;

     pt2.x = 2;
     pt2.y = 2;

    double distance_x =  pow(pt1.x - pt2.x,2);
    double distance_y  = pow(pt1.y-pt2.y,2);
    double distance = distance_x - distance_y;
    double squared_rooted_distance = sqrt(distance); 
    
    // Displaying distance between points 
    printf("Distance between point (%.1lf,%.1lf) and (%.1lf,%.1lf) is: %.1lf",pt1.x,pt1.y,pt2.x,pt2.y,squared_rooted_distance);
    return 0;
}