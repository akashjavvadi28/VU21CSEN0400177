#include<stdio.h>
main()
{
	char vowel,alphabet;
	printf("enter  the alphabet ");
	scanf("%c",&alphabet);
	switch(alphabet)
    {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U': 
	          printf("the alphabet is vowel");
	                break;
	default:
	        printf("the alphabet is consonant");
    }
}
