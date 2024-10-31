#include<stdio.h>
#include<conio.h>
#define max 10000
void main()
{
	int i=0,n=0;
	int arr[max];
	clrscr();
	printf("Enter the number of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Your array contains: ");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	//actual logic
	getch();
}