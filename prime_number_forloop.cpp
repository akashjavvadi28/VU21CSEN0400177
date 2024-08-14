#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("give a number - ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	if(n%i==0)
	count=count+1;
	}
if(n==1)
printf("%d is neither prime nor composite number",n);
else
{
	if(count<=2)

		printf("%d is prime number",n);
    else
        printf("%d is not a prime number",n);
}
}
