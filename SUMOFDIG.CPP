#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,n,m;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	m=n;
	while(m!=0)
	{
		sum+=m%10;
		m/=10;
	}
	printf("The Sum=%d",sum);
	getch();
}