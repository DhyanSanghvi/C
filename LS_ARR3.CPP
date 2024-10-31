#include<stdio.h>
#include<conio.h>
#define max 10000
void main()
{
	int i=0,n=0,key,cnt=0;
	int arr[max],index[max];
	clrscr();
	printf("Enter the number of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Your array contains: ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);


	//actual logic
	printf("\nEnter the number to be searched: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			index[cnt]=i+1;
			cnt++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(key == arr[i])
			break;
	}
	if(i<n)
	{
		printf("\nThe number of occurances of %d is %d",key,cnt);

		printf("\nAt positions:");
		for(i=0;i<cnt;i++)
			printf("%d ",index[i]);
	}
	else
	{
		printf("Number not found");
	}

	getch();
}