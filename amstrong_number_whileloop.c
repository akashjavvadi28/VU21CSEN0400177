#include<stdio.h>
main()
{
	int sum=0,d,n,k;
	printf("give value for n ");
	scanf("%d",&n);
	k=n;
	while(n>0)
	{
	d=n%10;
    sum=sum+d*d*d;
    n=n/10;
	 }
	 if(k==sum)
	 printf("it is a amstrong number");
	 else
	  printf("it is not a amstrong number");
	 
}
