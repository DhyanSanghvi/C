#include<stdio.h>
#include<conio.h>
void main()
{
	int key,i,n,arr[100],*ptr;
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
	printf("\nEnter the number you want to find:");
	scanf("%d",&key);
	ptr=&arr[0];
	for(i=0;i<n;i++,ptr++)
	{
		if(*ptr==key)
			break;
	}
	if(i<n)
		printf("\n%d found at Postion:%d",key,i+1);
	else
		printf("\n!NOT Found!");

	getch();
}