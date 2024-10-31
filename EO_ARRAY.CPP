#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0,k=0,n=0;
	int even[1000],odd[1000],arr[1000];
	printf("Enter the number of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers     :",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Your array contains :");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	printf("\nThe Even Array      :");
	for(i=0;i<j;i++)
		printf("%d ",even[i]);
	printf("\nThe Odd Array       :");
	for(i=0;i<k;i++)
		printf("%d ",odd[i]);
	getch();
	clrscr();
}