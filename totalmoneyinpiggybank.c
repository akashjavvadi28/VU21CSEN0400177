#include<stdio.h>
main()
{
	int a,b,c,d,e,total;
	printf("enter no.of 500 notes = ");
	scanf("%d",&a);
    printf("enter no.of 100 notes = ");
	scanf("%d",&b);
	printf("enter no.of 50 notes = ");
	scanf("%d",&c);
	printf("enter no.of 20 notes = ");
	scanf("%d",&d);
	printf("enter no.of 10 notes = ");
	scanf("%d",&e);
	total=500*a+100*b+50*c+20*d+10*e;
	printf("total money in piggy bank = %d",total);
}
