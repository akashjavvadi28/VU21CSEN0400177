#include <stdio.h>
main()
{
    float unit,amt,totalamt,surcharge;
    printf("Enter total units consumed: ");
    scanf("%f", &unit);
    if(unit <= 50)
    {
        amt =unit * 1;
    }
    else if(unit>50 && unit <= 100)
    {
        amt = (unit-50)*2+(50*1);
    }
    else if(unit>100 && unit<= 200)
    {
        amt = (unit-100)*3+(100*2);
    }
    else if (unit>200 && unit<= 350) 
    {
        amt = (unit-200)*4+(200*3);
    }
    else if(unit>350) 
       {
		 amt =(unit-350)*6+(350*4);
	}
	    surcharge = amt * 0.1;
    totalamt  = amt + surcharge;

    printf("Electricity Bill = Rs %2f", totalamt);

}


