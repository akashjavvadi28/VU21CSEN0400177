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
	switch((a>b) && (a>c))
	{   
	    case 1:printf("%d is maximum",a);
	           break;
	    case 0:
		switch(b>c)
		{     
		case 1: printf("%d is maximum",b);
		        break;
		case 0:  printf("%d is maximum",c);
			   break; 
		       }
		}
    }
