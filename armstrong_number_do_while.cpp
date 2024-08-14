#include<stdio.h>
main()
{
	int sum=0,d,n,k;
	printf("give value for n ");
	scanf("%d",&n);
	k=n;
	do
	{
	d=n%10;
    sum=sum+d*d*d;
    n=n/10;
	 }	while(n>0);
	 if(k==sum)
	 printf("it is a amstrong number");
	 else
	  printf("it is not a amstrong number");
	 
}
