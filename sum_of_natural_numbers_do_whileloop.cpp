#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("Enter n ");
    scanf("%d",&n);
	do
	{
		sum+=i;
		i++;
			}while(i<=n);
			printf("sum=%d",sum);
}
