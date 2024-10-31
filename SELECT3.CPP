#include<stdio.h>
#include<conio.h>
void selection(int arr[],int n)
{
	int i,j,index,small,count=0;
	for(i=0;i<n-1;i++)
	{
		small=arr[i];
		index=i;
		for(j=i;j<n;j++)
		{
			if(arr[j]<small)
			{
				small=arr[j];
				index=j;
			}
			count++;
		}
		arr[index]=arr[i];
		arr[i]=small;
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