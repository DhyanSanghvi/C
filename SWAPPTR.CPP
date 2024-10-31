#include<stdio.h>
#include<conio.h>
void swap(int *ptr1,int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
void main()
{
	int n1,n2;
	clrscr();
	printf("Enter 2 numbers:");
	scanf("%d%d",&n1,&n2);
	swap(&n1,&n2);
	printf("After Swapping:%d %d",n1,n2);

}