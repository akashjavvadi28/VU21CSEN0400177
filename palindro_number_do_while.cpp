#include<stdio.h>
main()
{
	int r=0,d,n,x;
	scanf("%d",&n);
	x=n;
	do
	{
	d=n%10;
	r=r*10+d;
	n=n/10;
    }while(n>0);
if(x==r)
printf("it is a palindro number:%d",r);
else
printf("it is not a palindro number:%d",r);
}

