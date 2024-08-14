#include <stdio.h>
main() 
{
    int a, i = 1;

    printf("Enter the number ");
    scanf("%d", &a);

    printf("The factors of a are  ");
    while (i <= a)
	 {
    	if (a%i== 0) 
		{
            printf("%d\n",i);
        }
        ++i;
    }
    printf("\n");
}
