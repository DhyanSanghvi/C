#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=1;j<10-i;j++)
		{
			printf("%d",&j);
		}
		printf("\n");
	}
}