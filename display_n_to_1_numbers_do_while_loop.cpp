#include<stdio.h>
main()
{
	int n;
	printf("enter value for n");
	scanf("%d",&n);
	do
	{
		printf("%d\n",n);
		n--;
	}while(n>=1);
}
