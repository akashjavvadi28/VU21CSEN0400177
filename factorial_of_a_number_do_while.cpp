#include<stdio.h>
main()
{
	int fact=1,n,i=1;
	printf("enter number");
	scanf("%d",&n);
	do
	{
		fact=fact*i;
		i++;
			}	while(i<=n);
			printf("factorial of given number= %d",fact);
}
