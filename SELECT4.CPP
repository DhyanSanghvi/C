#include<stdio.h>
#include<conio.h>
void selection(int arr[],int n)
{
	int i,j,index,smallest,count=0;
	for(i=0;i<=n-1;i++)
	{
		smallest=arr[i ];
		index=i;
		for(j=i;j<n;j++)
		{
			if(arr[j]<smallest)
			{
				smallest=arr[j];
				index=j;
			}
			count++;
		}
		arr[index]=arr[i];
		arr[i]=smallest;
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
}#include<stdio.h>
#include<conio.h>
void selection(int arr[],int n)
{
	int i,j,index,smallest,count=0;
	for(i=0;i<=n-1;i++)
	{
		smallest=arr[i ];
		index=i;
		for(j=i;j<n;j++)
		{
			if(arr[j]<smallest)
			{
				smallest=arr[j];
				index=j;
			}
			count++;
		}
		arr[index]=arr[i];
		arr[i]=smallest;
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