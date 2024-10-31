#include<stdio.h>
#include<conio.h>
void main()
{
	int row,col,spaces,n;
	printf("Enter the numbers you want to enter");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(spaces=1;spaces<=n-row;spaces++)
			printf(" ");
		for(col=1;col<=row;col++)
			printf("* ");
		printf("\n");
	}
	getch();
	clrscr();
}