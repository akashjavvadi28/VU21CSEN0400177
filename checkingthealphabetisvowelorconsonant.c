#include<stdio.h>
main()
{
	char alpha;
	printf("enter value for alpha ");
	scanf(" %c",&alpha);
	if (alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
	{
	if (alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
	printf("its a vowel");
    }
	else
	printf("its a consonant");
}
