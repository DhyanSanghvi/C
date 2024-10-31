#include<stdio.h>
#include<conio.h>
double area(int r)
{
	const double pi=3.14;
	double a;
	a=pi*r*r;
	return a;
}
void main()
{
	double r,a;
	clrscr();
	printf("Enter the radius of the circle:");
	fflush(stdin);
	scanf("%lf",&r);
	a=area(r);
	printf("Area of circle:%.2lf",a);
	getch();
}