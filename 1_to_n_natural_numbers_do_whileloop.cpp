#include<stdio.h>
main()
{
	int i=1,n;
	printf("enter value for n");
	scanf("%d",&n);
    do
	{
		printf("%d",i);
		i=i+1;
	}while(i<=n);
}
