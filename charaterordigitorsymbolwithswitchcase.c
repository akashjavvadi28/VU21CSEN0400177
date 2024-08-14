#include<stdio.h>
main()
{
    char a;
   	printf("enter  the character ");
	scanf("%c",&a);
	switch ((a>='a' && a<='z')||(a>='A' && a<='z'))
	{
	case 1:printf("enter character is character");
	       break;
    case 0:
          switch(a>'0' && a<='9')
	       {
	       case 1:
		   printf("entered character is digit");
		          break;
		    case 0:
		    	printf("enter character is special symbol");
		    }
    }
}
