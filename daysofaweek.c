#include<stdio.h>
main()
{
	int a;
	printf("display days of a week ");
	scanf("%d",&a);
	switch(a)
	{
	 case 1:printf(" it is a monday");
	        break;
	 case 2:printf("it is a tuesday");
	        break;
	 case 3:printf(" it is a wednesday");
	        break;
	 case 4:printf(" it is a thursday");
	        break;
	 case 5:printf(" it is a friday");
	        break;
	 case 6:printf(" it is a saturday");
	        break;
	 case 7:printf("it is a sunday");
	        break;
    default:
        printf("more than 7 days");
    }
}
	        
