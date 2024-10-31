#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int units;
	char name[500];
	double customer_id,total_amount = 0, surcharge = 0;
	printf("Enter Customer ID: ");
	scanf("%lf", &customer_id);
	printf("Enter Customer Name: ");
	fflush(stdin);
	gets(name);
	printf("Enter units consumed: ");
	scanf("%d", &units);

	if (units <= 199)
		total_amount = units * 1.20;
	else if (units >= 200 && units < 400)
		total_amount = units * 1.50;
	else if (units >= 400 && units < 600)
		total_amount = units * 1.80;
	else
		total_amount = units * 2.00;

	if (total_amount > 400)
	{
	    surcharge = total_amount * 0.15;
	    total_amount += surcharge;
	}
	if (total_amount < 100)
	    total_amount = 100;
	printf("\nElectricity Bill\n");
	printf("Customer ID: %.0f\n", customer_id);
	printf("Customer Name: %s\n", name);
	printf("Units Consumed: %d\n", units);
	printf("Total Amount: Rs. %.2lf\n", total_amount);
	getch();
}
