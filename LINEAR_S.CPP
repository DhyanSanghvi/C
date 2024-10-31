include<stdio.h>
#include<conio.h>
#define max 1000
void main()
{
	int key ,i,n,a[max],b[max],cnt=0;
	clrscr();
       printf("enter thew n");
       scanf("%d",&n);

	// accept
	printf("\n enter the %d elements one by one",n);
	for (i=0;i<n;i++)
	scanf("%d ",&a[i]);

	printf("\n your array");
	for (i=0;i<n;i++)
	printf("%d  ",a[i]);

	printf("\n enter the number to be searched");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	{
		if (key==a[i])
		{
			b[cnt]=i;
			cnt++;
	       }

	}
       printf("\n %d is ",key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		break;
	}
	if(i<n)
	{
		printf("\n the number found at");
		for (i=0;i<cnt;i++)
		printf(" %d ",b[i]);
	}
	else
	printf("not found");
	getch();
}