#include<stdio.h>
#include<conio.h>
void selection(int arr[],int n)
{
	int i,j,index,large,count=0;
	for(i=0;i<n-1;i++)
	{
		large=arr[0];
		index=0;
		for(j=0;j<=n-i-1;j++)
		{
			if(arr[j]>large)
			{
				large=arr[j];
				index=j;
			}
			count++;
		}
		arr[index]=arr[n-i-1];
		arr[n-i-1]=large;
	}
	printf("\ncount=%d",count);

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
	selection(arr,n);
	printf("\nSorted array:");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	getch();
}