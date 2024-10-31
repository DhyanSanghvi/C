#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,rev[1000],arr[1000];
	clrscr();
	printf("Enter the no. of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter th elements of your array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Your array contains:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	j=n-1;
	for(i=0;i<n;i++)
	{
		rev[i]=arr[j];
		j--;
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",rev[i]);
	}
	getch();
}