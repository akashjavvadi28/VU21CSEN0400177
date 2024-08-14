#include<stdio.h>
main()
{
	int r=0,d,n;
	printf("give value for n ");
	scanf("%d",&n);
	do
	{
	d=n%10;
	r=r*10+d;
	n=n/10;
    }while(n>0);
printf("reversed number = %d",r);
}

