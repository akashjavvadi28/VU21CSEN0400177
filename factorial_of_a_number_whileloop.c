#include<stdio.h>
main()
{
	int fact=1,i=1,n;
	printf("enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
			}
			printf("factorial of given number= %d",fact);
}
