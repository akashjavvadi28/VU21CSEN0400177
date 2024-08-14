#include<stdio.h>
main()
{
	int r,d,n;
	printf("give value for n ");
	scanf("%d",&n);
	for(r=0;n>0;)
	{
	d=n%10;
	r=r*10+d;
	n=n/10;
    }
printf("reversed number = %d",r);
}

