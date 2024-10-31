#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,sub=0,*ptr1,*ptr2;
	clrscr();
	ptr1=&n1;
	ptr2=&n2;
	printf("Enter 2 numbers:");
	scanf("%d %d",ptr1,ptr2);
	sub=*ptr1-*ptr2;
	printf("Result=%d",sub);
	getch();
}