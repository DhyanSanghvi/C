#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i=-1;
linear_rec(int *ptr,int n,int key)
{
	while(i<n)
	{
		i++;
		if(*ptr==key)
		{
			printf("Number Found At Index:%d",i);
			getch();
			exit(1);
		}
		else if(i<n)
		{
			ptr++;
			return linear_rec(ptr,n,key);
		}
	}
}

void main()
{
	int i,x[1000],key,n,index;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	printf("Your Array Consists:");
	for(i=0;i<n;i++)
		printf("%d ",x[i]);
	printf("\nEnter the key:");
	scanf("%d",&key);
	linear_rec(&x[0],n,key);
}
