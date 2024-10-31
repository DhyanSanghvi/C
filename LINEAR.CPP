#include<stdio.h>
#include<conio.h>
int linear(int x[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(x[i]==key)
		{
			return i;
		}
	}
	return -1;
}
void main()
{
	int arr[1000],key,i,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Your Array contains:");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);


}
