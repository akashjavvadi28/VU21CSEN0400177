#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter value for a ");
	scanf("%d",&a);
	printf("enter value for b ");
	scanf("%d",&b);
	printf("enter value for c ");
	scanf("%d",&c);
	if((a>b) && (a>c))
    {
    	printf("a is the largest number");
	}
	else if((b>a) && (b>c))
	{
		printf("b is the largest value");
	}
	else if((c>a) && (c>b))
	{
		printf("c is the largest number");
	}
}
