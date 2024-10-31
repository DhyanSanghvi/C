#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,arr[100],*ptr;
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
	printf("\nEven Numbers are:");
	ptr=&arr[0];
	for(i=0;i<n;i++,ptr++)
	{
		if(*ptr%2==0)
			printf("%d ",*ptr);
	}
	printf("\nOdd Numbers are:");
	ptr=&arr[0];
	for(i=0;i<n;i++,ptr++)
	{
		if(*ptr%2!=0)
			printf("%d ",*ptr);
	}

	getch();
}