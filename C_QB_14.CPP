#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n==0||n==1)
		return 1;
	else if(n>1)
		return n*fact(n-1);
	else
		return 0;
}
void main()
{
	int n,res;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&n);
	res=fact(n);
	printf("Fact=%d",res);
	getch();
}