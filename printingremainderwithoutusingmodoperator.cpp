#include<stdio.h>
main()
{
	int a,b,remainder;
	printf("enter divident");
	scanf("%d",&a);
	printf("enter divisor");
	scanf("%d",&b);
	remainder=a-(a/b)*b;
	printf("remainder is %d",remainder);	
}
