#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[1000],max=-32768,nmax=-32768,i,n;
	clrscr();
	printf("Enter the no. of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter the values of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(max<arr[i])
		{
			nmax=max;
			max=arr[i];
		}
	}
	printf("NMAX=%d",nmax);
	getch();
}