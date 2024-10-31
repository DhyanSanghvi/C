#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define max 10000
void sort(int *arr,int n)
{
	int *ptr,*ptr2;
	ptr=arr;
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		arr=ptr;
		ptr2=ptr+1;
		for(j=0;j<n-i-1;j++,ptr2++,arr++)
		{
			//ptr=arr;
			//ptr2=ptr+1;
			if(*arr>*ptr2)
			{
				temp=*arr;
				*arr=*ptr2;
				*ptr2=temp;

			}
		}
	}
}
void main()
{
	int i=0,n=0,flag=0,j,temp,cnt=0;
	int arr[max];
	clrscr();
	printf("Enter the number of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Your array contains: ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	//actual logic
	sort(&arr[0],n);
	printf("\nCount:%d",cnt);
	printf("\nSorted array:");
	for(i=0;i<n;i++)
	{
		delay(500);
		printf("%d ",arr[i]);
	}
	getch();
}