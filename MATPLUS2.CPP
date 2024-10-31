#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a[3][3],b[3][3],c[3][3];
printf("\nEnter your Numbers to be added in your 1st 3x3 array:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}}


printf("\nEnter the numbers to be added in your 2nd 3x3 array:\n");


for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{


scanf("%d",&b[i][j]);
}
}


for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf(" your additions is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}