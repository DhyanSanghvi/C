#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int num,quo,rem,sum=0;
 printf("\nEnter any number: ");
 scanf("%d",&num);
 quo=num;
 while(quo!=0)
 {
  rem=quo%10;
  sum+=rem*rem;
  quo/=10;
 }
 printf("\nThe sum of square of digits of %d is %d",num,sum);
 getch();
}