#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem=0,temp;
	double rev=0;
	clrscr();
	printf("Enter a number:");
	fflush(stdin);
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp=temp/10;
	}
	printf("rverse of %d = %.0lf",n,rev);
	getch();
}