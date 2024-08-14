#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("give value for n ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	sum=sum+i;
		}	
	if(n==sum)
	 printf("it is a perfect number");
	 else
	 printf("not a perfect number");
}
