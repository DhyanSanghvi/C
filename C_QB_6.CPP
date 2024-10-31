#include<stdio.h>
#include<conio.h>
void main()
{
	double mrk;
	clrscr();
	printf("Enter marks:");
	scanf("%lf",&mrk);
	if(mrk<=100 && mrk>75)
		printf("Grade A");
	else if(mrk<=75 && mrk>60)
		printf("Grade B");
	else if(mrk<=60 && mrk>40)
		printf("Grade Pass");
	else if(mrk<=40 && mrk>=0)
		printf("!Failed!");
	getch();
}
