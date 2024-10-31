#include<stdio.h>
#include<conio.h>
//Q1>i
/*void main()
{
	int a,b,temp;
	clrscr();
	printf("Enter 2 values:");
	scanf("%d%d",&a,&b);
	temp=a;
	b=a;
	b=temp;
	printf("%d %d",a,b);
	getch();
}*/
//Q1>ii
void main()
{
	int i=0,rem,num;
	double sum=0;
	clrscr();
	printf("Enter a 5-digit Number:");
	scanf("%d",&num);
	/*while(i<5)*/for(i=0;i<=5;i++)
	{
		rem=num%10;
		sum+=rem*1.0;
		num/=10;
		//i++;
	}
	printf("Sum=%lf",sum);
	getch();
}