#include<stdio.h>
#include<conio.h>
int sum1(int n)
{
	if(n==0)
		return n;
	else
		return n+sum1(n-1);
}
void main()
{
	int n,sum=0;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	sum=sum1(n);
	printf("Sum=%d",sum);
	getch();
}