#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int row,col,space,n,a;
	printf("enter the value:");
	scanf("%d",&n);
	a=n;
	for(row=0;row<=n;row++)
	{
		for(space=a;space<0;space--)
		{
			printf(" ");
		}
		for(col=0;col<row;col++)
		{
			printf("* ");
		}
		printf("\n");
		a--;
	}
	getch();
}