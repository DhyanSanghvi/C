#include<stdio.h>
#include<conio.h>
#define N 3
void main()
{
	int mat2[N][N] ,mat[N][N] ,i,j;
	clrscr();
	printf("\nEnter the %d elements one by one  :",N*N);

	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
		if((i==j && mat[i][j]!=1)||(i!=j && mat[i][j]!=0))
			break;
		}
		if(j<N)
			break;
	}
	if(i<N)
		printf("Not Identity Matrix");
	else
		printf("Identity Matrix");
	getch();
}