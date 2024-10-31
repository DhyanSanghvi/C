#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[1000],max=-32768,nmax=-32768,i,n,*ptr;
	clrscr();
	printf("Enter the no. of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter the values of the array:");
	ptr=&arr[0];
	for(i=0;i<n;i++,ptr++)
	{
		scanf("%d",ptr);
		if(max<*ptr)
		{
			nmax=max;
			max=*ptr;
		}
	}
	printf("Second Largest=%d",nmax);
	getch();
}