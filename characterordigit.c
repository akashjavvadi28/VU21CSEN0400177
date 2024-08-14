#include<stdio.h>
main()
{
	char a;
	printf("enter  the charactder ");
	scanf("%c",&a);
	switch(a>=65 && a>=97)
	{
		case 1:printf("enter character is character");
		    break;
		case 0:
			switch(a>='0' && a<='9')
	       {
	          case 1:
			  printf("entered character is digit");
			  break;
		   }
		   
	}
}
