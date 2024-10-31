#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 float V,A,r,pi;
 printf("Enter the radius of the sphere");
 scanf("%f", &r);
 pi=3.14;
 V=4/3*pi*r*r*r;
 A=4*pi*r*r;
 printf("Volume:%f \nArea:%f",V,A);
 getch();
}