#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,arr[100],*ptr,cnt=0;
	clrscr();
	printf("Enter the number of values you want to enter:");
	scanf("%d",&n);

	//Accepting:
	printf("Enter %d numbers:",n);
	ptr=&arr[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}

	//Display:
	printf("Your array contains:");
	ptr=&arr[0];
	for(i=0;i<n;i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}

	//Logic:
	printf("\nPrime numbers are:");
	ptr=&arr[0];
	for(i=0;i<n;i++,ptr++)
	{
		cnt=0;
		for(j=1;j<=n;j++)
		{
			if(*ptr%j==0)
				cnt++;
		}
		if(cnt==2)
			printf("%d ",*ptr);
	}
	getch();
}