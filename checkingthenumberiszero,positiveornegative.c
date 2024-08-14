#include<stdio.h>
main()
{
	int a;
	printf("enter value for a");
	scanf("%d", &a);
	if (a==0)
    {
	printf("the given number is zero");
    } 
    if (a>0)
    {
	printf("the given number is positive");
    }
    if (a<0)
    {
    printf("the given number is negative");	
	}
}
