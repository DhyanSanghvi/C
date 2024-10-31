#include<stdio.h>
#include<conio.h>
void checkprime(int num)
{
	int i,cnt=0;
	for(i=1;i<=num;i++)
		if(num%i==0)
			cnt++;
	if(cnt==2)
		printf("It is a Prime Number");
	else
		printf("It is not a Prime Number");
}
void main()
{
	int n;
	clrcsr();
	printf("Enter a number:");
	scanf("%d",&n);
	checkprime(n);
	getch();
}