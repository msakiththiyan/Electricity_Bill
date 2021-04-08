// Author: M.Sakiththiyan
/*
Usecase - Monthly Charges for the use of Electricity by two types of customers.
Types of Customers:
	1. Domestic Customers
	2. Samurdhi Customers
					 
Charging Method:
	For the first 100 units consumed, Rs.10 will be charged per unit. After 100 units, Rs.30 will be charged per unit. A Domestic Customer will be charged 20% of their bill along with their Monthly Charge if they have consumed more than 100 units.						 
*/

#include <stdio.h>

int main (void)
{
	int type, units;
	float monthlyCharge;

	printf("Enter the type of Customer \n\n");
	printf("1.Domestic Customer\n2.Samurdhi Customer\n\n");
	scanf("%d", &type);  

	switch (type)
	{ 
	  case 1: printf("\nEnter the Number of units consumed: ");
	          scanf("%d", &units);


	          if (units <=100)
	          {
			   monthlyCharge = (float)units*10;
	           printf("\nYour Monthly Charge is: Rs.%.2f",monthlyCharge);
	          }


				else if (units > 100)
	           {
				monthlyCharge = (float)100*10 + (float)(units-100)*30 + ((float)100*10 + (float)(units-100)*30)*0.2;
	           	printf("\nYour Monthly Charge is: Rs.%.2f",monthlyCharge);
			   }
			   break;

	  case 2: printf("\nEnter the Number of units consumed: ");
	          scanf("%d", &units); 


			  if (units <=100)
	          {
			   monthlyCharge = (float)units*10;
	           printf("\nYour Monthly Charge is: Rs.%.2f",monthlyCharge);
	          }


			    else if (units > 100)
	           {
	           	monthlyCharge = (float)100*10 + (float)(units-100)*30;
	           	printf("\nYour Monthly Charge is: Rs.%.2f", monthlyCharge);
		       }
		       break;

	  default: printf("\nError: Invalid Customer Type");
	           break;
	       

	} 

return 0;
	
}
