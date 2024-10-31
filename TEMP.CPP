#include<stdio.h>
#include<conio.h>
void main()
{
	double c,f;
	clrscr();
	printf("Enter the temperature (farenheit):");
	scanf("%lf",&f);
	c=((f-32)*5/9);
	printf("Temperature in celcius: %.2lf",c);
	getch();
}