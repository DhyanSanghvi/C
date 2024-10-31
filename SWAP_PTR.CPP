#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b,int *c)
{
	int temp;
	temp=*c;
	*c=*b;
	*b=*a;
	*a=temp;
}
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	swap(&a,&b,&c);
	printf("In main, after switching:%d %d %d",a,b,c);
	getch();
}