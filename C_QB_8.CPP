#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d x %d = %d\t",j,i,i*j);
		}
		//printf("\n");
	}
	getch();
}
