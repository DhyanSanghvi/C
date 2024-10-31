#include<stdio.h>
#include<conio.h>
void merge(int x[],int lb1,int ub1,int ub2)
{
	int i,j,k,temp[1000];
	i=lb1;
	j=ub1+1;
	k=0;
	while(i<=ub1 && j<=ub2)
	{
		if(x[i]<x[j])
			temp[k++]=x[i++];
		else
			temp[k++]=x[j++];
	}
	while(i<=ub1)
		temp[k++]=x[i++];
	while(j<=ub2)
		temp[k++]=x[j++];
	for(i=lb1,k=0;i<=ub2;i++,k++)
		x[i]=temp[k];
}
void mergesort(int x[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(x,lb,mid);
		mergesort(x,mid+1,ub);
		merge(x,lb,mid,ub);
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
	mergesort(arr,0,n-1);
	printf("\nSorted array:");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	getch();
}