#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,i,j,n,dig,quo,rem,pow;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&j);
	for(n=1;n<=j;n++)
	{
		//find the number of digits
		quo=n;
		dig=0;
		sum=0;
		while(quo!=0)
		{
			dig++;
			quo=quo/10;
		}
		quo=n;
		rem=0;
		sum=0;
		while(quo!=0)
		{
			rem=quo%10;
			pow=1;
			for(i=1;i<=dig;i++)
				pow=pow*rem;
			sum=sum+pow;
			quo=quo/10;
		}
		if(sum==n)
			printf("%d ",n);
	}
	getch();
}