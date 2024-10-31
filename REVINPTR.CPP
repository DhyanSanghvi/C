#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,temp,arr[100],*ptr,*ptr2;
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
	ptr2=&arr[n-1];
	for(i=0;i<n/2;i++,ptr++,ptr2--)
	{
		temp=*ptr;
		*ptr=*ptr2;
		*ptr2=temp;
	}
	printf("\nRversed Array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	getch();
}