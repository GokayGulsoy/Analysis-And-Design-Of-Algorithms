#include <stdio.h>

struct heigth 
{
    int meters;
    int centimeters;
};

int main()
{
    
    // Declaring height strcuts 
    struct heigth h1,h2;
    
    h1.meters = 6;
    h1.centimeters = 2;
    h2.meters = 5;
    h2.centimeters = 4;
    
    // adding height
    struct heigth sum_heigth;
    sum_heigth.meters  = h1.meters + h2.meters;
    sum_heigth.centimeters = h1.centimeters + h2.centimeters;
    
    // subtracting heights
    struct heigth subtracted_heigth;
    h1.meters -= 1;
    h1.centimeters += 100;

    subtracted_heigth.meters = h1.meters - h2.meters; 
    subtracted_heigth.centimeters = h1.centimeters - h2.centimeters;
    
    // Dislaying the subrated_height and sum_height 
    printf("Summation of heights is: %d'%d''\n",sum_heigth.meters,sum_heigth.centimeters);
    printf("Subtraction of heigths is: %d'%d''\n",subtracted_heigth.meters,subtracted_heigth.centimeters);

    return 0;
}