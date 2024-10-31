#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem;
	float sum=0;
	clrscr();
	printf("Enter a 5 digit number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("Sum=%.0f",sum);
	getch();
}