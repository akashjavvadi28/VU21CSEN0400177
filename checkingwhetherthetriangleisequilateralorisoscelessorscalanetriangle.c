#include<stdio.h>
main()
{
	float a,b,c;
	printf("enter value for a");
	scanf("%f",&a);
    printf("enter value for b");
	scanf("%f",&b);
	printf("enter value for c");
	scanf("%f",&c);
	if (a==b && b==c && c==a)
	{ 
	printf(" its a equilateral triangle");
	}
	else if (a+b==180||a+c==180||b+c==180)
    {
	printf ("its a isosceles triangle");
	}
	else 
	{
	printf("its a scalane triangle");
	}
}
