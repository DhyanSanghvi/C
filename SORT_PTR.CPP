#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,arr[100],*ptr,*ptr2,flag=0,k,temp=0;
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
	ptr2=ptr+1;
	flag=1;
	printf("\nptr1=%d\nptr2=%d",*ptr,*ptr2);
	for(i=0;i<n-1 && flag==1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++,ptr++,ptr2++)
		{
			if(*ptr>*ptr2)
			{
				temp=*ptr;
				*ptr=*ptr2;
				*ptr2=temp;
				flag=1;
			}
			printf("\nArray after %d: ",i);
			for(k=0;k<n;k++)
				printf("%d ",arr[k]);
		}
		ptr=&arr[0];
		ptr2=ptr+1;
	}
	ptr=&arr[0];
	printf("\nSorted Array:");
	for(i=0;i<n;i++,ptr++)
		printf("%d ",*ptr);

	getch();
}