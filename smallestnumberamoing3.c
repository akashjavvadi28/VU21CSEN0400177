#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter value for a");
	scanf("%d",&a);
	printf("enter value for b");
	scanf("%d",&b);																														
	printf("enter value for c");
	scanf("%d",&c);
	if( (a<b) && (a<c) )
		{
		printf("a is the smallest number");
	    }
	else if ( (b<a) && (b<c) )
       {
	  	printf("b is the smallest number");
	  }
	else 
	{
	printf("c is the smallest number");
	}
}
  
