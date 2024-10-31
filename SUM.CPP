#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,sum=0;
 for(i=2;i<=10;i+=2)
 {
  sum=sum+i;
 }
 printf("the sum of even numbers between 1 to 10 is %d",sum);
 getch();
}