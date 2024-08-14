#include<stdio.h>
main()
{
    char a;
   	printf("enter  the character ");
	scanf("%c",&a);
	if ((a>='a' && a<='z')||(a>='A' && a<='z'))
	{
	printf("enter character is character");
  }
    else if (a>'0' && a<='9')
	       {
		   printf("entered character is digit");} 
	else
	{
	 printf("entered character is special symbol");
	}
}
