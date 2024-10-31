#include<stdio.h>
#include<conio.h>
#define n 3
void main()
{
	int i,j,temp,arr[n][n],cnt=0;
	clrscr();
	printf("Enter %d numbers",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	//Logic:
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				cnt++;
				temp=arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=temp;
			}
		}
	}
	printf("TRANSPOSE:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%2d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("count=%d",cnt);
	getch();

}