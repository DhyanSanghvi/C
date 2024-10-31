#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,arr[100],*ptr,grt=-32768;
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
	for(i=0;i<n;i++)
	{
		if(*ptr>grt)
		{
			grt=*ptr;
		}
		ptr++;
	}
	printf("\nGreatest number=%d",grt);
	getch();
}