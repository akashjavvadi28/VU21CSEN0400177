#include "stdio.h" 
#include "math.h"
int main( )
{
     float x1, y1, x2, y2,distance;
     printf("Enter  x-co-ordinate of first point: ");
     scanf("%f", &x1);
 
     printf("Enter   y-co-ordinate of first point: ");
     scanf("%f", &y1);

     printf("Enter x-co-ordinate of second point: ");
     scanf("%f", &x2);

     printf("Enter y-co-ordinate of second point: ");
     scanf("%f", &y2);

      distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
     printf("distance=%f",sqrt(distance));
}
