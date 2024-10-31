#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int c,d,temp;
 c=10;
 d=20;
 temp=c;
 c=d;
 d=temp;
 printf("C is %d and D is %d",c,d);
 getch();
}