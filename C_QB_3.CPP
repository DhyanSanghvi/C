#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter three Numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c && a!=b && a!=c)
		printf("%d is the greatest",a);
	else if(b>a && b>c)
		printf("%d is the greatest",b);
	else if(a==b && b==c)
		printf("All three are equal");
	else if(c>a && b<c)
		printf("%d is the greatest",c);
	else
		printf("There are 2 greatest numbers");
	getch();

}