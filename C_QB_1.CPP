#include<stdio.h>
#include<conio.h>
void main()
{
		int C,D,temp;
		clrscr();
		printf("Enter 2 values:");
		scanf("%d %d",&C,&D);
		printf("Values before swap: %d %d",C,D);
		temp=C;
		C=D;
		D=temp;
		printf("\nValues After Swapping: %d %d",C,D);
		getche();
}