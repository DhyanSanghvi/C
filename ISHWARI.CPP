#include<stdio.h>
#include<conio.h>
int fact(int n)
{
if(n>=1)
{
return n*fact(n-1);
}
else
{
return 1;
}
}
void main()
{
clrscr();
int result,n1;
printf("Enter a number:\t");
scanf("%d",&n1);
if(n1<0)
{
printf("Factorial of %d is not possible",n1);
}
else
{
result=fact(n1);
printf("Factorial of %d is %d",n1,result);
}
getch();
}