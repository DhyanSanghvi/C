#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();
	printf("Enter the number of lines:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			printf(" ");
		}
		for(k=0;k<i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}