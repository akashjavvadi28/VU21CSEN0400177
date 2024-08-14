#include<stdio.h>
main()
{
	float i=1,n,sum=0,avg;
	printf("Enter n ");
    scanf("%f",&n);
    do
	{
	  sum=sum+i;
		i++;
    }while(i<=n);
    printf("sum=%f\n",sum);
	avg=sum/n;
	printf("avg=%f\n ",avg);
}
