#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,i,j,n,dig,quo,rem;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&j);
	for(n=0;n<=j;n++)
	{
		//find the number of digits
		quo=n*n;
		rem=0;
		sum=0;
		while(quo!=0)
		{
			rem=quo%10;
			sum=sum+rem;
			quo=quo/10;
		}
		if(sum==n)
			printf("%d ",n);
	}
	getch();
}