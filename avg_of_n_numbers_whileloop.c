#include<stdio.h>
main()
{
	float i=1,n,sum=0,avg;
	printf("Enter n ");
    scanf("%f",&n);
	while(i<=n)
	{
	  sum=sum+i;
		i++;
    }
    printf("sum=%f\n",sum);
	avg=sum/n;
	printf("avg=%f\n ",avg);
}
