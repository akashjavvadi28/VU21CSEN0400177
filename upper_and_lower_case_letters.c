#include<stdio.h>
main()
{
	char a;
	printf("enter a letter ");
	scanf("%c",&a);
	switch(a>=65 && a<=90)
	{
		 case 1:
		        a= a+32;
		    	printf("converted character is= %c ",a);
		        break;
       case 0:
	      switch(a>=97 && a<=122)	
	   {
		    case 1:
		         a=a-32;
		         printf("converted character is= %c ",a);
                 break;
		  case 0:
		  switch(a>='0' && a<='9')
		  {
		  case 1:printf("enter character is number",a);
		         break;
		         
		  default:
	       printf("its a special symbol"); 
		  }
	  }
	}
}
