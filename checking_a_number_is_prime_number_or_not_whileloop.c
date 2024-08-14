#include<stdio.h>
main()
{
	int i=1,n,count=0;
	printf("give a number - ");
	scanf("%d",&n);
	while(i<=n)
{
	if(n%i==0)
	count=count+1;
	i=i+1;
}
if(count<=2)
printf("given number is prime number");
else
printf("given number is not a prime number");
}
