#include<stdio.h>
main()
{  
    int year;  
    printf("Enter a year ");  
    scanf("%d", &year);  
    if (year%4==0 && year%400==0 || year%100!=0)
    {  
        printf("it is a leap year");  
    } 
	else 
	{  
        printf("it is not a leap year"); 
	}
}
