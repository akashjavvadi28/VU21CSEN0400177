#include<stdio.h>
main()
{
    float a,b,c,d,e,total,avg,percentage;
    printf("enter value for a");
	scanf("%f",&a);
	printf("enter value for b");
	scanf("%f",&b);
	printf("enter value for c");
	scanf("%f",&c);
	printf("enter value for d");
	scanf("%f",&d);
	printf("enter value for e");
	scanf("%f",&e);
	total=(a+b+c+d+e);
	printf("total = %f\n",total);
	avg=(a+b+c+d+e)/5;
	printf("avg= %f\n",avg);
	percentage=((a+b+c+d+e)/500)*100;
	printf("percentage = %f\n",percentage);
	}
