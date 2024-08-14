#include<stdio.h>
main()
{
	char k;
	int bill,quantity;
	printf("Burger-B,Frechfries-F,Pizza-P,Sandwich-S  ");
	scanf("%c",&k);
	switch(k)
    { case 'B':printf("ordered for burger ");
             printf(" enter quantity ");
             scanf("%d",&quantity);
             bill=quantity*200;
             break;
	case 'F':printf("ordered for Frenchfries ");
             printf(" enter quantity ");
             scanf("%d",&quantity);
             bill=quantity*50;
             break;
	case 'P':printf("ordered for Pizza ");
             printf(" enter quantity ");
             scanf("%d",&quantity);
             bill=quantity*500;
             break;
	case 'S':printf("ordered for Sandwich ");
             printf(" enter quantity ");
             scanf("%d",&quantity);
             bill=quantity*150;
             break;
    default:
			printf("incorrect opreator is selected");
	} 
	printf("bill=%d",bill);
}
