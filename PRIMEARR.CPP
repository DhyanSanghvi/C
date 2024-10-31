#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0,cnt=0,n=0,arr[1000];
	clrscr();
	printf("Enter the no of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter %d Numbers:",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Your array contains:");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	printf("\nThe prime numbers are:");

	for(i=0;i<n;i++)
	{
		cnt=0;
		for(j=1;j<=arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				cnt++;
			}
		}
		if(cnt==2)
		{
			printf("%d ",arr[i]);
		}
	}

	getch();
}
