#include<stdio.h>
main()
{
	float radius,perimeter,area;
	printf("enter value for radius of the circle = ");
	scanf("%f",& radius);
	perimeter=2*3.14*radius;
	printf("perimeter of a circle = %f\n",perimeter);
	area=3.14*radius*radius;
	printf("area of a circle = %f\n",area);
}
