#include<stdio.h>
#include<conio.h>
void insert(int x[],int n)
{
	int i,j,num;
	for(i=1;i<n;i++)
	{
		num=x[i];
		for(j=i-1;j>=0 && x[j]>num;j--)
		{
			x[j+1]=x[j];
			x[j]=num;
		}
	}
}

void main()
{
	int arr[100],n,i;
	clrscr();
	printf("Enter the number of elements to be entered:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Your array contains:");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	insert(arr,n);
	printf("\nSorted array:");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	getch();
}fn