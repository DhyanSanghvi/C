#include<stdio.h>
#include<conio.h>
void main()
{
	int key,i,j=0,n,index[100],arr[100],*ptr,cnt=0;
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
		{
			cnt++;
			index[j]=i+1;
			j++;
		}
	}
	if(cnt>0)
	{
		printf("\n%d has %d occurancses in the above array",key,cnt);
		printf("\nAt Positions:");
		for(i=0;i<cnt;i++)
			printf("%d ",index[i]);
	}
	else
		printf("\n!NOT FOUND!");

	getch();
}