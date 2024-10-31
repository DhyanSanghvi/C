#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define max 10000
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
	flag=1;
	for(i=0;i<n-1 && flag==1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{       cnt++;
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

				flag=1;
			}
		}
	}
	printf("\nCount:%d",cnt);
	printf("\nSorted array:");
	for(i=0;i<n;i++)
	{
		delay(500);
		printf("%d ",arr[i]);
	}
	getch();
}