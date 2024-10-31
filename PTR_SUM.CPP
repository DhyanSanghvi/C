#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,arr[100],*ptr,sum=0;
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

	//Sum logic:
	ptr=&arr[0];
	for(i=0;i<n;i++)
	{
		//ptr=&arr[i];    you can also do this
		sum+=*ptr;
		ptr++;
	}
	printf("\nThe sum=%d",sum);
	getch();
}