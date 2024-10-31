#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n!=0)
		return n*fact(n-1);
	else
		return n;
}
void main()
{
	int n,res;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	res=fact(n);
	printf("Factorial:%d",res);
	getch();
}