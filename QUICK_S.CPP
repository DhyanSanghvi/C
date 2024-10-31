#include<stdio.h>
#include<conio.h>
int part(int x[],int lb,int ub)
{
	int pivot,up,down,temp;
	pivot=x[lb];
	down=lb;
	up=ub;
	while(up > down)
	{
		while(x[down]<=pivot && down<ub)
			down++;
		while(x[up]>pivot)
			up--;
		if(down<up)
		{
			temp=x[up];
			x[up]=x[down];
			x[down]=temp;
		}
	}
	x[lb]=x[up];
	x[up]=pivot;

	return up;
}
void quick(int x[],int lb,int ub)
{
	int j;
	if(lb>=ub)
		return;
	j=part(x,lb,ub);
	quick(x,lb,j-1);
	quick(x,j+1,ub);
}
void main()
{
	int x[1000],n,i;
	clrscr();
	printf("Enter the number of elements to be entered:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Your array contains:");
	for(i=0;i<n;i++)
	printf("%d ",x[i]);
	quick(x,0,n-1);
	printf("\nSorted array:");
	for(i=0;i<n;i++)
	printf("%d ",x[i]);
	getch();
}