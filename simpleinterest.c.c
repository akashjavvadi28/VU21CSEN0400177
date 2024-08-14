#include<stdio.h>
main()
{
	float p,t,r,SI;
	printf("enter value for p = ");
	scanf("%f",&p);
	printf("enter value for t = ");
	scanf("%f", &t);
	printf("enter value for r = ");
	scanf("%f", &r);
	SI=(p*r*t)/100;
	printf("SI = %f",SI);
}
