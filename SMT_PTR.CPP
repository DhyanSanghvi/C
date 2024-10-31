#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,n,arr[100],*ptr,*ptr2,smt=0;
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
	ptr=&arr[0];
	smt=arr[0];
	printf("\nBEFORE:%d",smt);
	for(i=0;i<n;i++)
	{
		if(*ptr<smt)
		{
			smt=*ptr;
		}
		ptr++;
	}
	printf("\nSmallest number=%d",smt);
	getch();
}